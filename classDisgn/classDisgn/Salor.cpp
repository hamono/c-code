#include "Salor.h"
#include<iostream>

Salor::Salor()
{
}

Salor::Salor(const char* Na, int Co, const char* Wo, double Wa, double Su) :Employ(Na, Co, Wo, Wa)
{
    this->sumMoney = Su;
}

double Salor::pay()
{
	cout << "销售员请假天数是：" << endl;
	cin >> leaveDays;
	this->wage = this->baseWage + this->sumMoney * 0.1 - leaveDays * 50;
	return this->wage;
}

Salor Salor::operator=(Salor pop)
{
	this->name = pop.name;
	this->code = pop.code;
	this->work = pop.work;
	this->wage = pop.wage;
	this->sumMoney = pop.sumMoney;
	return *this;
}
