#include "Momentowy.h"


int my_activation(double a) { //hiperbolicznyTangens(double)
	return tanh(a);
}
Momentowy::Momentowy(int numWeights, double rate, double moment)
{
	learningRate = rate;
	momentum = moment;
	for (int i = 0; i < numWeights + 1; i++) {
		double r = ((double)(rand() % 100)) / 100;
		weights.push_back(r);
		delta.push_back( 0.0 );
	}
}


Momentowy::~Momentowy()
{
}


double Momentowy::guess(double inputs[144]) {
	double sum = 0;
	for (int i = 0; i < 144; i++) {
		sum += inputs[i] * weights[i];
	}
	sum += 1 * weights.back();//biasInput
	return my_activation(sum);
}

double Momentowy::train(double inputs[144], double target) {
	double guess = this->guess(inputs);
	double error = target - guess;
	for (int i = 0; i < 144; i++) {
		double zmiana= error*inputs[i] * learningRate + momentum*delta[i];
		weights[i] += zmiana;
		delta[i] = zmiana;
		
	}
	weights.back() += error*learningRate;//biasInput
	return guess;
}
