#pragma once

#ifndef Data_h
#define Data_h
using namespace std;
class Data
{
private:
	double *inner_data;
public:
	Data();
	~Data();
	double *getData();
	void setData(char s);
	double *returnData(char s);
	void showData();

};
#endif // !Data.h



