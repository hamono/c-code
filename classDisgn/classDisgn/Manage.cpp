#include "Manage.h"

Manage::Manage()
{
}

Manage::Manage(const char* Na, int Co, const char* Wo, double Wa, double Bo):Employ(Na,Co,Wo,Wa)
{
	this->bonus = Bo;
}

 double Manage::pay()
{
	 cout << "经理请假天数是：" << endl;
	 cin >> leaveDays;
	 this->wage = this->baseWage + this->bonus - leaveDays * 50;
	 return this->wage;
}

 Manage Manage::operator=(Manage pop)
 {
	 this->name = pop.name;
	 this->code = pop.code;
	 this->work = pop.work;
	 this->wage = pop.wage;
	 this->bonus = pop.bonus;
	 return *this;
 }
