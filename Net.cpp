#include "Net.h"
#include "Perceptron.h"


Net::Net(double nauka)
{
	wyjscie = new double[ilosc +1];
	litery=new char[21]{ "abcdefghijABCDEFGHIJ" };
	for (int i = 0; i < ilosc +1; i++) {
		//cout << "Numer " << i << ": " << endl;
		p[i]=new Perceptron(144,(double)nauka);
	}
	for (int i = 0; i < ilosc +1; i++) {
		wyjscie[i] = (double)0.0;
	}
}


Net::~Net()
{
	delete litery;
	delete wyjscie;
}

void Net::setInput(int * in)
{
	for (int i = 0; i < 144; i++)
	{
		data[i] = in[i];
	}
}

void Net::train(double * wyniki)
{
	for (int i = 0; i < 21; i++) {
		//cout << "Perceptron[" << i << "] ";
		wyjscie[i]=p[i]->train(data,wyniki[i]);
	}
}

void Net::train(double * data, double * wyniki)
{
	for (int i = 0; i < 21; i++) {
		//cout << "Perceptron[" << i << "] ";
		wyjscie[i] = p[i]->train(data, wyniki[i]);
	}
}

void Net::guess(double * x)
{
	for (int i = 0; i < 21; i++) {
		//cout << "Perceptron[" << i << "] ";
		wyjscie[i] = p[i]->guess(x);
	}
}

double * Net::getOutput()
{
	return wyjscie;
}

void Net::showOutput()
{
	for (int i = 0; i < ilosc-1; i++) {
		cout << "Czy jest to "<<litery[i]<<": "<<wyjscie[i] << endl;
	}
	//cout << "Czy jest liter¹: "  << wyjscie[ilosc] << endl;
}

void Net::showTheOne(int i)
{
	cout << "Wynik: " << wyjscie[i] << endl;
}
