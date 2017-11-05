#include <iostream>
#include "Perceptron.h"
#include<time.h>
#include <vector>
using namespace std;

int main() {
	srand(time(NULL));
	Perceptron *p = new Perceptron(2, (double)0.5);
	int ile = 12;
	vector<double> labels = {0,0,0,1};
	vector<vector<double>> inputs = { {0,0},{0,1},{1,0},{1,1} };
	for(int j=0;j<ile;j++){
		for (int i = 0; i < labels.size(); i++) {
			p->train(inputs[i], labels[i]);
		}
	}
	vector<double> n1 = { 0,0 };
	vector<double> n2 = { 1,1 };
	cout << "n1: " << p->guess(n1) << endl << "n2:" << p->guess(n2) << endl;
	system("pause");
}