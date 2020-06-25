#pragma once
#include"Node.h"
#include"Manage.h"

class ListMa
{
	Node<Manage>* head, * tail;
public:
	double sumPeople = 0.0;
	ListMa();
	double sumWage();
	Manage searchMaxWage();
	Manage searchMinWage();
	Manage searchMaxLeave();
	Manage searchMinLeave();
	Manage* searchRangeWage(double min,double max);
	Manage* searchRangeLeave(double min,double max);
	double averageWage();
	void insert(Manage item);
};
