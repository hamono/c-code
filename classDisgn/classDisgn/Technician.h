#pragma once
#include"Employ.h"

class Technician :public Employ
{
public:
	Technician();
	Technician(const char* Na, int Co, const char* Wo, double Wa, double Ot, double Ti);
	virtual double pay();
	Technician operator =(Technician pop);
private:
	double otherWage;
	double time;
};
