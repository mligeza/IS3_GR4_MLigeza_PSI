#pragma once
#include <vector>
using namespace std;
class Momentowy
{
private:
	double learningRate; //wspó³czynnik nauki
	double momentum; //wspó³czynnik momentum
	vector<double> weights; //wektor wag
	vector<double> delta; //wektor poprzedniej zmiany wag
public:
	Momentowy(int numWeights, double rate, double moment); //konstuktor ustalaj¹cy iloœæ wejœæ, wspó³czynnik nauki i momentum
	~Momentowy(); //destruktor
	double guess(double inputs[144]); // metoda podaj¹ca przewydiwany wynik dla podanych danych
	double train(double inputs[144], double target);//metoda szkol¹ca dla podanych danych i przewidywanego wyniku

};

