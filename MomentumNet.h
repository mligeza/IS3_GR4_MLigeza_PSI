#pragma once
#include <vector>
#include <iostream>
#include "Momentowy.h"
class MomentumNet
{

private:
	double data[144]; //dane na wejœciu
	int ilosc = 20;	//iloœæ neuronów w sieci jednowarstwowej
	char *litery;	//litery przypisane odpowiednim neuronom
	double *wyjscie; //wektor wyjœcia
	Momentowy *p[20];//neurony
public:
	MomentumNet(double nauka,double moment);//konstruktor wymagaj¹cy wspó³czynnika nauki i momentum
	~MomentumNet();//destruktor
	void setInput(int *in);//ustawienie wejœcia
	void train(double *wyniki);//uczenie po sanych wynikach( z osobno ustawionym wejœciem)
	void train(double *data, double *wyniki);//uczenie po danych i wynikach 
	void guess(double *x); //zgaduje po danych
	double *getOutput(); //zwraca wektor wyjœcia
	void showOutput();//wypisuje wektor wyjœcia
	void showTheOne(int i);//wypisuje wynik wyjscia wybranego neuronu
};

