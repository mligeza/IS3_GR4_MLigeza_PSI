#include<iostream>
#include <vector>
#include<time.h>
#include<math.h>
#include"Perceptron.h"

using namespace std;


int activation(double a) { //hiperbolicznyTangens(double)
	return (int)tanh(a);
}

Perceptron::Perceptron(int numWeights, double rate) { //constructor
													 //initialize weights with random vals[0..1]
	learningRate = rate;
	for (int i = 0; i < numWeights + 1; i++) {
		double w = ((double)(rand() % 100)) / 100;
		cout <<"Waga["<<i<<"]= "<< w << endl;
		weights.push_back(w);
	}

}

double Perceptron::guess(vector<double> inputs) {
	double sum = 0;
	for (int i = 0; i < this->weights.size() - 1; i++) {
		sum += inputs[i] * weights[i];
	}
	sum += 1 * weights.back();//biasInput
	return activation(sum);
}

void Perceptron::train(vector<double> inputs, double target) {
	double guess = this->guess(inputs);
	double error = target - guess;

	for (int i = 0; i < this->weights.size() - 1; i++) {
		weights[i] += error*inputs[i] * learningRate;
	}
	weights.back() += error*learningRate;//biasInput
}