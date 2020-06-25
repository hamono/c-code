#pragma once
#include"Node.h"
#include"Technician.h"

class ListTe
{
	Node<Technician>* head, * tail;
public:
	double sumPeople = 0.0;
	ListTe();
	double sumWage();
	Technician searchMaxWage();
	Technician searchMinWage();
	Technician searchMaxLeave();
	Technician searchMinLeave();
	Technician* searchRangeWage(double min, double max);
	Technician* searchRangeLeave(double min, double max);
	double averageWage();
	void insert(Technician item);
};