#include "Technician.h"
#include<iostream>

Technician::Technician()
{
}

Technician::Technician(const char* Na, int Co, const char* Wo, double Wa, double Ot, double Ti) :Employ(Na, Co, Wo, Wa)
{
	this->otherWage = Ot;
	this->time = Ti;
}

double Technician::pay()
{
	cout << "技术员请假天数是：" << endl;
	cin >> leaveDays;
	this->wage = this->baseWage + this->otherWage * this->time - leaveDays * 50;
	return this->wage;
}

Technician Technician::operator=(Technician pop)
{
	this->name = pop.name;
	this->code = pop.code;
	this->work = pop.work;
	this->wage = pop.wage;
	this->otherWage = pop.otherWage;
	this->time = pop.time;
	return *this;
}
