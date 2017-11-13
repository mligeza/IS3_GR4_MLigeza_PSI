#include "MomentumNet.h"



MomentumNet::MomentumNet(double nauka, double moment)
{
	wyjscie = new double[ilosc + 1];
	litery = new char[21]{ "abcdefghijABCDEFGHIJ" };
	for (int i = 0; i < ilosc + 1; i++) {
		//cout << "Numer " << i << ": " << endl;
		p[i] = new Momentowy(144, (double)nauka,(double)moment);
	}
	for (int i = 0; i < ilosc + 1; i++) {
		wyjscie[i] = (double)0.0;
	}
}


MomentumNet::~MomentumNet()
{
}
void MomentumNet::setInput(int * in)
{
	for (int i = 0; i < 144; i++)
	{
		data[i] = in[i];
	}
}

void MomentumNet::train(double * wyniki)
{
	for (int i = 0; i < 21; i++) {
		//cout << "Perceptron[" << i << "] ";
		wyjscie[i] = p[i]->train(data, wyniki[i]);
	}
}

void MomentumNet::train(double * data, double * wyniki)
{
	for (int i = 0; i < 21; i++) {
		//cout << "Perceptron[" << i << "] ";
		wyjscie[i] = p[i]->train(data, wyniki[i]);
	}
}

void MomentumNet::guess(double * x)
{
	for (int i = 0; i < 21; i++) {
		//cout << "Perceptron[" << i << "] ";
		wyjscie[i] = p[i]->guess(x);
	}
}

double * MomentumNet::getOutput()
{
	return wyjscie;
}

void MomentumNet::showOutput()
{
	for (int i = 0; i < ilosc - 1; i++) {
		cout << "Czy jest to " << litery[i] << ": " << wyjscie[i] << endl;
	}
	//cout << "Czy jest liter¹: "  << wyjscie[ilosc] << endl;
}

void MomentumNet::showTheOne(int i)
{
	cout << "Wynik: " << wyjscie[i] << endl;
}