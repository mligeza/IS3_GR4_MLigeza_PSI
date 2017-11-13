#pragma once
#include <vector>

using namespace std;

class Perceptron {

private:
	double learningRate; // wsp�czynnik nauki
	vector<double> weights; // wagi na wej�ciach
public:
	Perceptron(int numWeights, double rate); // konstruktor ustalaj�cy ilo�� wej�� i wsp�czynnik nauki
	double guess(double inputs[144]); // metoda podaj�ca przewydiwany wynik dla podanych danych
	double train(double inputs[144], double target); //metoda szkol�ca dla podanych danych i przewidywanego wyniku

};





