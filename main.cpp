#include<iostream>
#include <vector>
#include<time.h>
#include"Perceptron.h"
#include "Net.h"
#include "MomentumNet.h"
#include "Momentowy.h"


using namespace std;
double *returnData(char s)
{
	//---------------du¿e litery
	if (s == (char) "A") {
		return new double[144]{
			0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,
			0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
			0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
			0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,0,0,0,
			1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0
		};
	}
	else if (s == (char) "B") {
		return new double[144]{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
			1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
			1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
			1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
			1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0
		};
	}
	else if (s == (char) "C") {
		return new double[144]{
			0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
			0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,
			1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,
			0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0
		};
	}
	else if (s == (char) "D") {
		return new double[144]{
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
			1,1,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0
		};
	}
	else if (s == (char) "E")
	{
		return new double[144]{
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0
		};
	}
	else if (s == (char) "F")
	{
		return new double[144]{
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "G")
	{
		return new double[144]{
			0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
			0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,
			1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,
			1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
			0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,
			0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0
		};
	}
	else if (s == (char) "H") {
		return new double[144]{
			1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0
		};
	}
	else if (s == (char) "I") {
		return new double[144]{
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "J") {
		return new double[144]{
			0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0
		};
	}
	//--------------ma³e litery
	if (s == (char) "a") {
		return new double[144]{
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "b") {
		return new double[144]{
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "c") {
		return new double[144]{
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "d") {
		return new double[144]{
			0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "e")
	{
		return new double[144]{
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "f")
	{
		return new double[144]{
			0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "g")
	{
		return new double[144]{
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "h") {
		return new double[144]{
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "i") {
		return new double[144]{
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "j") {
		return new double[144]{
			0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	//----------------------znaki
	else if (s == (char) "!") {
		return new double[144]{
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "@") {
		return new double[144]{
			0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
			0,1,1,1,0,0,0,1,1,1,0,1,0,1,1,1,0,0,
			1,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1,0,0,
			1,1,0,0,0,1,1,0,0,1,1,0,0,0,1,1,0,0,
			1,1,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,
			1,1,0,0,1,1,0,1,1,1,0,1,1,1,1,1,0,0,
			1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0
		};
	}
	else if (s == (char) "#") {
		return new double[144]{
			0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
			0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "$") {
		return new double[144]{
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,1,0,1,0,1,0,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
			0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,1,0,1,0,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,1,0,1,0,1,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "%") {
		return new double[144]{
			1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,0,0,0,
			1,0,0,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,
			1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,0,0,0,
			1,1,1,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,
		};
	}
	//--------------------liczby
	else if (s == (char) "1") {
		return new double[144]{
			0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "2") {
		return new double[144]{
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,
			0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "3") {
		return new double[144]{
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "4") {
		return new double[144]{
			0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,1,1,1,1,0,1,1,0,0,0,0,0,0,0,
			0,0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0
		};
	}
	else if (s == (char) "5") {
		return new double[144]{
			1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
			1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
			0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0
		};
	}
	else {
		double *z = new double[144];
		for (int i = 0; i < 144; i++)
		{
			z[i] = (rand() % 2);
		}
		return z;
	}

}
double *a = returnData((char)"a");
double w_a[21]{
	1,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *b = returnData((char)"b");
double w_b[21]{
	0,1,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *c = returnData((char)"c");
double w_c[21]{
	0,0,1,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *d = returnData((char)"d");
double w_d[21]{
	0,0,0,1,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *e = returnData((char)"e");
double w_e[21]{
	0,0,0,0,1,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *f = returnData((char)"f");
double w_f[21]{
	0,0,0,0,0,
	1,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *g = returnData((char)"g");
double w_g[21]{
	0,0,0,0,0,
	0,1,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *h = returnData((char)"h");
double w_h[21]{
	0,0,0,0,0,
	0,0,1,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *i = returnData((char)"i");
double w_i[21]{
	0,0,0,0,0,
	0,0,0,1,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *j = returnData((char)"j");
double w_j[21]{
	0,0,0,0,0,
	0,0,0,0,1,
	0,0,0,0,0,
	0,0,0,0,0,
	1
};
double *A = returnData((char)"A");
double w_A[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	1,0,0,0,0,
	0,0,0,0,0,
	1
};
double *B = returnData((char)"B");
double w_B[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,1,0,0,0,
	0,0,0,0,0,
	1
};
double *C = returnData((char)"C");
double w_C[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,1,0,0,
	0,0,0,0,0,
	1
};
double *D = returnData((char)"D");
double w_D[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,1,0,
	0,0,0,0,0,
	1
};
double *E = returnData((char)"E");
double w_E[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,1,
	0,0,0,0,0,
	1
};
double *F = returnData((char)"F");
double w_F[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	1,0,0,0,0,
	1
};
double *G = returnData((char)"G");
double w_G[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,1,0,0,0,
	1
};
double *H = returnData((char)"H");
double w_H[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,1,0,0,
	1
};
double *I = returnData((char)"I");
double w_I[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,1,0,
	1
};
double *J = returnData((char)"J");
double w_J[21]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,1,
	1
};
double w_X[21]{ 0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0 };
int *check(int *wyniki, char litera, double *ret) {
	int inny;
	if (litera == (char)"a" || litera == (char)"b" || litera == (char)"c" || litera == (char)"d" || litera == (char)"e"
		|| litera == (char)"f" || litera == (char)"g" || litera == (char)"h" || litera == (char)"i" || litera == (char)"j" ||
		litera == (char)"A" || litera == (char)"B" || litera == (char)"C" || litera == (char)"D" || litera == (char)"E" || 
		litera == (char)"F" || litera == (char)"G" || litera == (char)"H" || litera == (char)"I" || litera == (char)"J" ) {
		inny = 0;
		wyniki[2]++;
	}
	else {
		inny = 1;
		wyniki[4]++;
	}
	if (ret[0] == 1) { //literka a
		if (litera==(char)"a")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[1] == 1) { //literka b
		if (litera == (char)"b")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[2] == 1) { //literka b

		if (litera == (char)"c")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[3] == 1) { //literka b

		if (litera == (char)"d")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[4] == 1) { //literka b

		if (litera == (char)"e")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[5] == 1) { //literka b

		if (litera == (char)"f")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[6] == 1) { //literka b

		if (litera == (char)"g")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[7] == 1) { //literka b

		if (litera == (char)"h")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[8] == 1) { //literka b

		if (litera == (char)"i")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[9] == 1) { //literka b
		if (litera == (char)"j")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[10] == 1) { //literka b

		if (litera == (char)"A")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[11] == 1) { //literka b

		if (litera == (char)"B")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[12] == 1) { //literka b

		if (litera == (char)"C")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[13] == 1) { //literka b
	
		if (litera == (char)"D")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[14] == 1) { //literka b

		if (litera == (char)"E")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[15] == 1) { //literka b

		if (litera == (char)"F")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[16] == 1) { //literka b
	
		if (litera == (char)"G")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[17] == 1) { //literka b

		if (litera == (char)"H")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[18] == 1) { //literka b

		if (litera == (char)"I")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	if (ret[19] == 1) { //literka b

		if (litera == (char)"J")//dobrze
		{
			wyniki[0]++;
		}
		else if (inny == 1) {
			wyniki[3]++;
		}
		else {
			wyniki[1]++;
		}
	}
	return wyniki;
}
void net(int ile, int test, double nauka,bool show) {
	Net *net = new Net(nauka);
	for (int z = 0; z < ile; z++) {
		if (show == true) { cout << "+"; }
		int r = rand() % 40;
		switch (r) {
		case 0:
			net->train(a, w_a);
			//cout << "Uczono a: ";
			//net->showTheOne(0);
			break;
		case 1:
			net->train(b, w_b);
			//cout << "Uczono b: ";
			//net->showTheOne(1);
			break;
		case 2:
			net->train(c, w_c);
			break;
			//cout << "Uczono c: ";
			//net->showTheOne(2);
		case 3:
			net->train(d, w_d);
			//cout << "Uczono d: ";
			//net->showTheOne(3);
			break;
		case 4:
			net->train(e, w_e);
			//cout << "Uczono e: ";
			//net->showTheOne(4);
			break;
		case 5:
			net->train(f, w_f);
			break;
		case 6:
			net->train(g, w_g);
			break;
		case 7:
			net->train(h, w_h);
			break;
		case 8:
			net->train(i, w_i);
			break;
		case 9:
			net->train(j, w_j);
			break;
		case 10:
			net->train(A, w_A);
			break;
		case 11:
			net->train(B, w_B);
			break;
		case 12:
			net->train(C, w_C);
			break;
		case 13:
			net->train(D, w_D);
			break;
		case 14:
			net->train(E, w_E);
			break;
		case 15:
			net->train(F, w_F);
			break;
		case 16:
			net->train(G, w_G);
			break;
		case 17:
			net->train(H, w_H);
			break;
		case 18:
			net->train(I, w_I);
			break;
		case 19:
			net->train(J, w_J);
			break;
		case 20:
			net->train(returnData((char)"!"), w_X);
			break;
		case 21:
			net->train(returnData((char)"@"), w_X);
			break;
		case 22:
			net->train(returnData((char)"#"), w_X);
			break;
		case 23:
			net->train(returnData((char)"$"), w_X);
			break;
		case 24:
			net->train(returnData((char)"%"), w_X);
			break;
		case 25:
			net->train(returnData((char)"1"), w_X);
			break;
		case 26:
			net->train(returnData((char)"2"), w_X);
			break;
		case 27:
			net->train(returnData((char)"3"), w_X);
			break;
		case 28:
			net->train(returnData((char)"4"), w_X);
			break;
		case 29:
			net->train(returnData((char)"5"), w_X);
			break;
		default:
			net->train(returnData((char)"p"), w_X);
			break;
		}
	}

	int *wynik = new int[5]{0,0,0,0,0};
	double *ret;
	for (int z = 0; z < test; z++) {
		if (show == true) {
			cout << z << " ";
		}
		int r = rand() % 30;
		switch (r) {
		case 0:

			net->guess(returnData((char)"a"));
			if (show == true) { cout << z << " Zgaduje a:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"a", ret);
			break;
		case 1:

			net->guess(returnData((char)"b"));
			if (show == true) { cout << "Zgaduje b:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"b", ret);
			break;
		case 2:

			net->guess(returnData((char)"c"));
			if (show == true) { cout << "Zgaduje c:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"c", ret);
			break;
		case 3:

			net->guess(returnData((char)"d"));
			if (show == true) { cout << "Zgaduje d:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"d", ret);
			break;
		case 4:

			net->guess(returnData((char)"e"));
			if (show == true) { cout << "Zgaduje e:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"e", ret);
			break;
		case 5:

			net->guess(returnData((char)"f"));
			if (show == true) { cout << "Zgaduje f:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"f", ret);
			break;
		case 6:

			net->guess(returnData((char)"g"));
			if (show == true) { cout << "Zgaduje g:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"g", ret);
			break;
		case 7:

			net->guess(returnData((char)"h"));
			if (show == true) { cout << "Zgaduje h:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"h", ret);
			break;
		case 8:

			net->guess(returnData((char)"i"));
			if (show == true) { cout << "Zgaduje i:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"i", ret);
			break;
		case 9:

			net->guess(returnData((char)"j"));
			if (show == true) { cout << "Zgaduje j:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"j", ret);
			break;
		case 10:

			net->guess(returnData((char)"A"));
			if (show == true) { cout << "Zgaduje A:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"A", ret);
			break;
		case 11:

			net->guess(returnData((char)"B"));
			if (show == true) { cout << "Zgaduje B:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"B", ret);
			break;
		case 12:

			net->guess(returnData((char)"C"));
			if (show == true) { cout << "Zgaduje C:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"C", ret);
			break;
		case 13:

			net->guess(returnData((char)"D"));
			if (show == true) { cout << "Zgaduje D:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"D", ret);
			break;
		case 14:

			net->guess(returnData((char)"E"));
			if (show == true) { cout << "Zgaduje E:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"E", ret);
			break;
		case 15:

			net->guess(returnData((char)"F"));
			if (show == true) { cout << "Zgaduje F:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"F", ret);
			break;
		case 16:

			net->guess(returnData((char)"G"));
			if (show == true) { cout << "Zgaduje G:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"G", ret);
			break;
		case 17:

			net->guess(returnData((char)"H"));
			if (show == true) { cout << "Zgaduje H:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"H", ret);
			break;
		case 18:

			net->guess(returnData((char)"I"));
			if (show == true) { cout << "Zgaduje I:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"I", ret);
			break;
		case 19:

			net->guess(returnData((char)"J"));
			if (show == true) { cout << "Zgaduje J:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"J", ret);
			break;
		case 20:

			net->guess(returnData((char)"!"));
			if (show == true) { cout << "Zgaduje !:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"!", ret);
			break;
		case 21:

			net->guess(returnData((char)"@"));
			if (show == true) { cout << "Zgaduje @:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"@", ret);
			break;
		case 22:

			net->guess(returnData((char)"#"));
			if (show == true) { cout << "Zgaduje #:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"#", ret);
			break;
		case 23:

			net->guess(returnData((char)"$"));
			if (show == true) { cout << "Zgaduje $:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"$", ret);
			break;
		case 24:

			net->guess(returnData((char)"%"));
			if (show == true) { cout << "Zgaduje %:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"%", ret);
			break;
		case 25:

			net->guess(returnData((char)"1"));
			if (show == true) { cout << "Zgaduje 1:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"1", ret);
			break;
		case 26:

			net->guess(returnData((char)"2"));
			if (show == true) { cout << "Zgaduje 2:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"2", ret);
			break;
		case 27:

			net->guess(returnData((char)"3"));
			if (show == true) { cout << "Zgaduje 3:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"3", ret);
			break;
		case 28:

			net->guess(returnData((char)"4"));
			if (show == true) { cout << "Zgaduje 4:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"4", ret);
			break;
		case 29:

			net->guess(returnData((char)"5"));
			if (show == true) { cout << "Zgaduje 5:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"5", ret);
			break;
		}
	}
	cout << wynik[0] << "/" << wynik[1] << "/" << wynik[2] << ", " << wynik[3] << "/" << wynik[4] << endl;
}

void momentumnet(int ile, int test,double nauka, double moment,bool show) {
	MomentumNet*net = new MomentumNet(nauka,moment);
	for (int z = 0; z < ile; z++) {
		if (show == true) { cout << "+"; }
		int r = rand() % 40;
		switch (r) {
		case 0:
			net->train(a, w_a);
			//cout << "Uczono a: ";
			//net->showTheOne(0);
			break;
		case 1:
			net->train(b, w_b);
			//cout << "Uczono b: ";
			//net->showTheOne(1);
			break;
		case 2:
			net->train(c, w_c);
			break;
			//cout << "Uczono c: ";
			//net->showTheOne(2);
		case 3:
			net->train(d, w_d);
			//cout << "Uczono d: ";
			//net->showTheOne(3);
			break;
		case 4:
			net->train(e, w_e);
			//cout << "Uczono e: ";
			//net->showTheOne(4);
			break;
		case 5:
			net->train(f, w_f);
			break;
		case 6:
			net->train(g, w_g);
			break;
		case 7:
			net->train(h, w_h);
			break;
		case 8:
			net->train(i, w_i);
			break;
		case 9:
			net->train(j, w_j);
			break;
		case 10:
			net->train(A, w_A);
			break;
		case 11:
			net->train(B, w_B);
			break;
		case 12:
			net->train(C, w_C);
			break;
		case 13:
			net->train(D, w_D);
			break;
		case 14:
			net->train(E, w_E);
			break;
		case 15:
			net->train(F, w_F);
			break;
		case 16:
			net->train(G, w_G);
			break;
		case 17:
			net->train(H, w_H);
			break;
		case 18:
			net->train(I, w_I);
			break;
		case 19:
			net->train(J, w_J);
			break;
		case 20:
			net->train(returnData((char)"!"), w_X);
			break;
		case 21:
			net->train(returnData((char)"@"), w_X);
			break;
		case 22:
			net->train(returnData((char)"#"), w_X);
			break;
		case 23:
			net->train(returnData((char)"$"), w_X);
			break;
		case 24:
			net->train(returnData((char)"%"), w_X);
			break;
		case 25:
			net->train(returnData((char)"1"), w_X);
			break;
		case 26:
			net->train(returnData((char)"2"), w_X);
			break;
		case 27:
			net->train(returnData((char)"3"), w_X);
			break;
		case 28:
			net->train(returnData((char)"4"), w_X);
			break;
		case 29:
			net->train(returnData((char)"5"), w_X);
			break;
		default:
			net->train(returnData((char)"p"), w_X);
			break;
		}
	}

	int *wynik=new int[5]{ 0,0,0,0,0 };
	double *ret;
	for (int z = 0; z < test; z++) {
		if (show == true) {
			cout << z << " ";
		}
		int r = rand() % 30;
		switch (r) {
		case 0:
			
			net->guess(returnData((char)"a"));
			if (show == true) { cout << z << " Zgaduje a:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"a", ret);
			break;
		case 1:
			
			net->guess(returnData((char)"b"));
			if (show == true) { cout << "Zgaduje b:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"b", ret);
			break;
		case 2:
			
			net->guess(returnData((char)"c"));
			if (show == true) { cout << "Zgaduje c:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"c", ret);
			break;
		case 3:
		
			net->guess(returnData((char)"d"));
			if (show == true) { cout << "Zgaduje d:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"d", ret);
			break;
		case 4:
			
			net->guess(returnData((char)"e"));
			if (show == true) { cout << "Zgaduje e:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"e", ret);
			break;
		case 5:
			
			net->guess(returnData((char)"f"));
			if (show == true) { cout << "Zgaduje f:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"f", ret);
			break;
		case 6:
			
			net->guess(returnData((char)"g"));
			if (show == true) { cout << "Zgaduje g:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"g", ret);
			break;
		case 7:
			
			net->guess(returnData((char)"h"));
			if (show == true) { cout << "Zgaduje h:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"h", ret);
			break;
		case 8:
			
			net->guess(returnData((char)"i"));
			if (show == true) { cout << "Zgaduje i:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"i", ret);
			break;
		case 9:
			
			net->guess(returnData((char)"j"));
			if (show == true) { cout << "Zgaduje j:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"j", ret);
			break;
		case 10:
			
			net->guess(returnData((char)"A"));
			if (show == true) { cout << "Zgaduje A:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"A", ret);
			break;
		case 11:
			
			net->guess(returnData((char)"B"));
			if (show == true) { cout << "Zgaduje B:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"B", ret);
			break;
		case 12:
			
			net->guess(returnData((char)"C"));
			if (show == true) { cout << "Zgaduje C:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"C", ret);
			break;
		case 13:
			
			net->guess(returnData((char)"D"));
			if (show == true) { cout << "Zgaduje D:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"D", ret);
			break;
		case 14:
			
			net->guess(returnData((char)"E"));
			if (show == true) { cout << "Zgaduje E:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"E", ret);
			break;
		case 15:
			
			net->guess(returnData((char)"F"));
			if (show == true) { cout << "Zgaduje F:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"F", ret);
			break;
		case 16:
			
			net->guess(returnData((char)"G"));
			if (show == true) { cout << "Zgaduje G:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"G", ret);
			break;
		case 17:
			
			net->guess(returnData((char)"H"));
			if (show == true) { cout << "Zgaduje H:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"H", ret);
			break;
		case 18:
		
			net->guess(returnData((char)"I"));
			if (show == true) { cout << "Zgaduje I:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"I", ret);
			break;
		case 19:
			
			net->guess(returnData((char)"J"));
			if (show == true) { cout << "Zgaduje J:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"J", ret);
			break;
		case 20:
			
			net->guess(returnData((char)"!"));
			if (show == true) { cout << "Zgaduje !:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"!", ret);
			break;
		case 21:
			
			net->guess(returnData((char)"@"));
			if (show == true) { cout << "Zgaduje @:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"@", ret);
			break;
		case 22:
			
			net->guess(returnData((char)"#"));
			if (show == true) { cout << "Zgaduje #:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"#", ret);
			break;
		case 23:
			
			net->guess(returnData((char)"$"));
			if (show == true) { cout << "Zgaduje $:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"$", ret);
			break;
		case 24:
			
			net->guess(returnData((char)"%"));
			if (show == true) { cout << "Zgaduje %:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"%", ret);
			break;
		case 25:
			
			net->guess(returnData((char)"1"));
			if (show == true) { cout << "Zgaduje 1:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"1", ret);
			break;
		case 26:
			
			net->guess(returnData((char)"2"));
			if (show == true) { cout << "Zgaduje 2:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"2", ret);
			break;
		case 27:
			
			net->guess(returnData((char)"3"));
			if (show == true) { cout << "Zgaduje 3:" << endl;  net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"3", ret);
			break;
		case 28:
			
			net->guess(returnData((char)"4"));
			if (show == true) { cout << "Zgaduje 4:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"4", ret);
			break;
		case 29:
			
			net->guess(returnData((char)"5"));
			if (show == true) { cout << "Zgaduje 5:" << endl; net->showOutput(); }
			ret = net->getOutput();
			wynik = check(wynik, (char)"5", ret);
			break;
		}
	}
	cout << wynik[0] << "/" << wynik[1] << "/" << wynik[2] << ", " << wynik[3] << "/" << wynik[4] << endl;
}

int main() {
	srand((int)time(NULL));
	
	int MAKS=2000;
	for (int i = 0; i < 4; i++) {
		net(1000, 10, (double)0.7, false);
		
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		momentumnet(1000, 10, (double)0.7, (double)0.1, false);
	}
	
	
	system("pause");
	return 0;
}
