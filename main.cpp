/*PSI Lab 1
** GR 2
** Autor: Micha³ Ligêza
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include <fstream>

using namespace std;

struct Connection {
	double weight;
	double deltaWeight;
};
class Neuron;
typedef vector<Neuron> Layer;

//--------------------------------NEURON
class Neuron
{
public:
	Neuron(unsigned numOutputs, unsigned myIndex) {
		for (unsigned c = 0; c < numOutputs; ++c) {
			n_outputWeights.push_back(Connection());
			n_outputWeights.back().weight = randomWeight();
		}
		n_myIndex = myIndex;
	}
	void feedForward(const Layer &prevLayer) {
		double sum = 0.0;
		for (unsigned n = 0; n < prevLayer.size(); n++)
		{
			sum += prevLayer[n].getOutputVal() * prevLayer[n].n_outputWeights[n_myIndex].weight;
		}
		n_outputVal = Neuron::transferFunction(sum);
	}
	void setOutputVal(double val) { n_outputVal = val; }
	double getOutputVal() const { return n_outputVal; }
	void calcOutputGradients(double target) {
		double delta = target - n_outputVal;
		n_gradient = delta *transferFunctionDeriverative(n_outputVal);
	}
	void calcHiddenGradients(const Layer &next) {
		double dow = sumDow(next);
		n_gradient = dow * transferFunctionDeriverative(n_outputVal);
	}
	void updateInputWeights(Layer &prev) {
		for (unsigned n = 0; n < prev.size(); n++)
		{
			Neuron &neuron = prev[n];
			double oldDeltaWeight = neuron.n_outputWeights[n_myIndex].deltaWeight;


			double newDeltaWeight = eta * neuron.getOutputVal() *n_gradient + alpha * oldDeltaWeight;
			neuron.n_outputWeights[n_myIndex].deltaWeight = newDeltaWeight;
			neuron.n_outputWeights[n_myIndex].weight += newDeltaWeight;
		}
	}
private:
	static double eta; //<0,1>
	static double alpha; //<0,n>
	static double randomWeight(void) { return rand() / double(RAND_MAX); }
	double n_outputVal;
	double n_gradient;
	vector<Connection> n_outputWeights;
	unsigned n_myIndex;
	double sumDow(const Layer &next) const {
		double sum = 0.0;
		for (unsigned n = 0; n < next.size() - 1; n++)
		{
			sum += n_outputWeights[n].weight * next[n].n_gradient;
		}
		return sum;
	}
	static double  transferFunction(double x) {
		return tanh(x);
	}
	static double  transferFunctionDeriverative(double x) {
		return  1.0 - x*x;
	}
};
double Neuron::eta = 0.05;
double Neuron::alpha = 0.3;
//--------------------------------NET
class Net {
public:
	Net(const vector<unsigned> &topology)
	{
		unsigned numLayers = topology.size();
		for (unsigned layerNum = 0; layerNum < numLayers; ++layerNum)
		{
			unsigned numOutputs = layerNum == topology.size() - 1 ? 0 : topology[layerNum + 1];
			n_layers.push_back(Layer());
			for (unsigned neuronNum = 0; neuronNum <= topology[layerNum]; ++neuronNum)
			{
				n_layers.back().push_back(Neuron(numOutputs,neuronNum));
				cout << "Made a Neuron!" << endl;
			}
			//bias?
			n_layers.back().back().setOutputVal(1.0);
		}
	}
	void feedForward(const vector<double> &inputVals) {
		assert(inputVals.size() == n_layers[0].size() - 1);
		for (unsigned i = 0; i < inputVals.size(); i++)
		{
			n_layers[0][i].setOutputVal(inputVals[i]);
		}
		for (unsigned layerNum = 1; layerNum < n_layers.size(); layerNum++) {
			Layer &prevLayer = n_layers[layerNum - 1];
			for (unsigned n = 0; n < n_layers[layerNum].size() - 1; n++)
			{
				n_layers[layerNum][n].feedForward(prevLayer);
			}
		}
	};
	void backProp(const vector<double> &targetVals) {
		//errors
		Layer &outputLayer = n_layers.back();
		 n_error = 0.0;
		for (unsigned n = 0; n < outputLayer.size() - 1; n++)
		{
			double delta = targetVals[n] - outputLayer[n].getOutputVal();
			n_error += delta * delta;
		}
		n_error /= outputLayer.size() - 1;
		n_error = sqrt(n_error); //RMS
		recentAverageError = (recentAverageError* recentAverageSmoothingFactor + n_error) / (recentAverageSmoothingFactor + 1.0);
		//output gradients
		for (unsigned n = 0; n < outputLayer.size() - 1; n++) {
			outputLayer[n].calcOutputGradients(targetVals[n]);
		}
		//gradients in hidden layers
		for (unsigned layerNum = n_layers.size() -2; layerNum > 0; layerNum--) {
			Layer &hiddenLayer = n_layers[layerNum];
			Layer &nextLayer = n_layers[layerNum + 1];

			for (unsigned n = 0; n < hiddenLayer.size(); n++)
			{
				hiddenLayer[n].calcHiddenGradients(nextLayer);
			}
		}
		//update connection weights
		for (unsigned layerNum = n_layers.size() - 1; layerNum > 0; layerNum--) 
		{
			Layer &layer = n_layers[layerNum];
			Layer &prevLayer = n_layers[layerNum -1];
			for (unsigned n = 0; n < layer.size() - 1; n++)
			{
				layer[n].updateInputWeights(prevLayer);
			}
		}
	};
	void getResults(vector<double> &resultVals) const {
		resultVals.clear();
		for (unsigned n = 0; n < n_layers.back().size() - 1; n++)
		{
			resultVals.push_back(n_layers.back()[n].getOutputVal());
		}
	}
private:
	vector<Layer> n_layers; //n_layers[layerNum][neuronNum]
	double n_error;
	double recentAverageError;
	double recentAverageSmoothingFactor;
};


int main()
{
	fstream log;
	log.open("log.txt", ios::out);
	log << "--------------------------" << endl;
	log << "NAND TEST - PSI" << endl;
	log << "--------------------------" << endl;
	vector<unsigned> topology;
	topology.push_back(2);
	topology.push_back(2);
	topology.push_back(1);
	Net myNet(topology);

	//NAND
	for (int n = 0; n < 20000; n++) {
		int x, y,z;
		if (n % 4 == 0) { x = 0; y = 0; z = 0; }
		if (n % 4 == 1) { x = 0; y = 1; z = 1; }
		if (n % 4 == 2) { x = 1; y = 0; z = 1; }
		if (n % 4 == 3) { x = 1; y = 1; z = 0;}
			log <<"Iteration: "<< n+1 << endl;
			vector<double> inputVals;
			inputVals.push_back(x);
			inputVals.push_back(y);
			myNet.feedForward(inputVals);
			for (unsigned i = 0; i < inputVals.size(); i++)
			{
				log << "Input[" << i << "]: " << inputVals[i] << endl;
			}

			vector<double> targetVals;
			targetVals.push_back(z);
			myNet.backProp(targetVals);
			for (unsigned i = 0; i < targetVals.size(); i++)
			{
				log << "Target: " << targetVals[i] << endl;
			}
			vector<double> resultVals;
			myNet.getResults(resultVals);

			for (unsigned i = 0; i < resultVals.size(); i++)
			{
				log << "Result: " << resultVals[i] << endl;
			}
			log << endl;
		}

	
	


	system("pause");
}