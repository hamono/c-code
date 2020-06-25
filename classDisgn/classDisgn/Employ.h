#pragma once
#include<iostream>
using namespace std;

class Employ
{
public:
	Employ() {};
	Employ(const char* Na, int Co, const char* Wo, double Wa)
	{
		this->name = Na;
		this->code = Co;
		this->work = Wo;
		this->baseWage = Wa;
	};
	virtual double pay()=0;
	void setName(char* Na)
	{
		this->name = Na;
	};
	void setCode(int Co)
	{
		this->code = Co;
	};
	void setWork(char* Wo)
	{
		this->work = Wo;
	};
	void setWage(double Wa)
	{
		this->wage = Wa;
	};
	void show()
	{
		cout << this->name << "\t" << this->code << "\t" << this->work << "\t" << this->wage<<endl;
	};
	double showLeaveDays()
	{
		return leaveDays;
	}
	~Employ(){};

protected:
	const char* name;
	int code;
	const char* work;
	double baseWage;
	double wage;
	double leaveDays = 0;
};


