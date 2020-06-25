#pragma once
#include"Employ.h"
#include"Salor.h"
#include"Technician.h"

class Manage :public Employ
{
public:
	Manage();
	Manage(const char* Na, int Co, const char* Wo, double Wa, double Bo);
	virtual double pay();
	Manage operator =(Manage pop);
private:
	double bonus;
};
