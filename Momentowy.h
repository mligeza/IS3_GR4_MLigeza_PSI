#pragma once
#include <vector>
using namespace std;
class Momentowy
{
private:
	double learningRate; //wsp�czynnik nauki
	double momentum; //wsp�czynnik momentum
	vector<double> weights; //wektor wag
	vector<double> delta; //wektor poprzedniej zmiany wag
public:
	Momentowy(int numWeights, double rate, double moment); //konstuktor ustalaj�cy ilo�� wej��, wsp�czynnik nauki i momentum
	~Momentowy(); //destruktor
	double guess(double inputs[144]); // metoda podaj�ca przewydiwany wynik dla podanych danych
	double train(double inputs[144], double target);//metoda szkol�ca dla podanych danych i przewidywanego wyniku

};

