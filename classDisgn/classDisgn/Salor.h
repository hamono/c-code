#pragma once
#include"Employ.h"

class Salor :public Employ
{
public:
	Salor();
	Salor(const char* Na, int Co, const char* Wo, double Wa, double Su);
	virtual double pay();
	Salor operator =(Salor pop);
private:
	double sumMoney;
};
