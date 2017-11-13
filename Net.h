#pragma once
#include <vector>
#include <iostream>
#include "Perceptron.h"
class Net
{
private:
	double data[144]; 
	int ilosc=20;
	char *litery;
	double *wyjscie; 
	Perceptron *p[20];
public:
	Net(double nauka);
	~Net();
	void setInput(int *in);
	void train(double *wyniki);
	void train(double *data,double *wyniki);
	void guess(double *x);
	double *getOutput();
	void showOutput();
	void showTheOne(int i);
};

