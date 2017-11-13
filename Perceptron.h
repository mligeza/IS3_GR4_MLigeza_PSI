#pragma once
#include <vector>

using namespace std;

class Perceptron {

private:
	double learningRate; // wspó³czynnik nauki
	vector<double> weights; // wagi na wejœciach
public:
	Perceptron(int numWeights, double rate); // konstruktor ustalaj¹cy iloœæ wejœæ i wspó³czynnik nauki
	double guess(double inputs[144]); // metoda podaj¹ca przewydiwany wynik dla podanych danych
	double train(double inputs[144], double target); //metoda szkol¹ca dla podanych danych i przewidywanego wyniku

};





