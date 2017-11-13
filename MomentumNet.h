#pragma once
#include <vector>
#include <iostream>
#include "Momentowy.h"
class MomentumNet
{

private:
	double data[144]; //dane na wej�ciu
	int ilosc = 20;	//ilo�� neuron�w w sieci jednowarstwowej
	char *litery;	//litery przypisane odpowiednim neuronom
	double *wyjscie; //wektor wyj�cia
	Momentowy *p[20];//neurony
public:
	MomentumNet(double nauka,double moment);//konstruktor wymagaj�cy wsp�czynnika nauki i momentum
	~MomentumNet();//destruktor
	void setInput(int *in);//ustawienie wej�cia
	void train(double *wyniki);//uczenie po sanych wynikach( z osobno ustawionym wej�ciem)
	void train(double *data, double *wyniki);//uczenie po danych i wynikach 
	void guess(double *x); //zgaduje po danych
	double *getOutput(); //zwraca wektor wyj�cia
	void showOutput();//wypisuje wektor wyj�cia
	void showTheOne(int i);//wypisuje wynik wyjscia wybranego neuronu
};

