#include<iostream>
#include <vector>
#include<time.h>
#include<math.h>
#include"Perceptron.h"

using namespace std;


int activation(double a) { //hiperbolicznyTangens(double)
	return tanh(a);
}

Perceptron::Perceptron(int numWeights, double rate) { //constructor
													  //initialize weights with random vals[0..1]
	learningRate = rate;
	for (int i = 0; i < numWeights + 1; i++) {
		double r = ((double)(rand() % 100)) / 100;
		weights.push_back(r);
	}

}

double Perceptron::guess(double inputs[144]) {
	double sum = 0;
	for (int i = 0; i < 144; i++) {
		sum += inputs[i] * weights[i];
	}
	sum += 1 * weights.back();//biasInput
	return activation(sum);
}

double Perceptron::train(double inputs[144], double target) {
	double guess = this->guess(inputs);
	double error = target - guess;
	for (int i = 0; i < 144; i++) {
		weights[i] += error*inputs[i] * learningRate;
	}
	weights.back() += error*learningRate;//biasInput
	return guess;
}