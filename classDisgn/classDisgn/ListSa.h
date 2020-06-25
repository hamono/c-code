#pragma once
#include"Node.h"
#include"Salor.h"

class ListSa
{
	Node<Salor>* head, * tail;
public:
	double sumPeople = 0.0;
	ListSa();
	double sumWage();
	Salor searchMaxWage();
	Salor searchMinWage();
	Salor searchMaxLeave();
	Salor searchMinLeave();
	Salor* searchRangeWage(double min, double max);
	Salor* searchRangeLeave(double min, double max);
	double averageWage();
	void insert(Salor item);
};