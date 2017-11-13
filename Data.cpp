#include "Data.h"
#include <string>
#include <iostream>
using namespace std;

Data::Data()
{
}


Data::~Data()
{
}

double * Data::getData()
{
	return inner_data;
}

void Data::setData(char s)
{
	inner_data = returnData(s);
	
}

double * Data::returnData(char s)
{
	//---------------du�e litery
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
	//--------------ma�e litery
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
			inner_data[i] = (rand() % 2);
		}
		return z;
	}
	
}

void Data::showData()
{
	cout << "------------------" << endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			if (inner_data[i * 18 + j]==1)
			{
				cout << "X";
			}
			else {
				cout << " ";
			}	
		}
		cout << endl;
	}
	cout << "------------------" << endl;
}
