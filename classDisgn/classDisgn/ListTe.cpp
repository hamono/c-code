#include "ListTe.h"
#include"Node.h"

ListTe::ListTe()
{
	head = tail = NULL;
}

double ListTe::sumWage()
{
	Node<Technician>* p = head;
	double sum = 0;
	while (p != NULL)
	{
		sum = sum + p->item.pay();
		p = p->next;
	}
	return sum;
}

Technician ListTe::searchMaxWage()
{
	Node<Technician>* p = head;
	Technician maxWagePeople;
	double maxWage = 0;
	while (p != NULL)
	{
		if (p->item.pay() >= maxWage)
		{
			maxWagePeople = p->item;
		}
		p = p->next;
	}
	return maxWagePeople;
}

Technician ListTe::searchMinWage()
{
	Node<Technician>* p = head;
	Technician minWagePeople;
	double maxWage = 1000000;
	while (p != NULL)
	{
		if (p->item.pay() <= maxWage)
		{
			minWagePeople = p->item;
		}
		p = p->next;
	}
	return minWagePeople;
}

Technician ListTe::searchMaxLeave()
{
	Node<Technician>* p = head;
	Technician maxLeavePeople;
	double maxLeave = 0;
	while (p != NULL)
	{
		if (p->item.showLeaveDays() >= maxLeave)
		{
			maxLeavePeople = p->item;
		}
		p = p->next;
	}
	return maxLeavePeople;
}

Technician ListTe::searchMinLeave()
{
	Node<Technician>* p = head;
	Technician minLeavePeople;
	double maxLeave = 31;
	while (p != NULL)
	{
		if (p->item.showLeaveDays() <= maxLeave)
		{
			minLeavePeople = p->item;
		}
		p = p->next;
	}
	return minLeavePeople;
}

Technician* ListTe::searchRangeWage(double min, double max)
{
	Node<Technician>* p = head;
	Technician* wagePeople=new Technician;
	int i = 0;
	while (p != NULL)
	{
		if (p->item.pay() >= min && p->item.pay() < max)
		{
			wagePeople[i] = p->item;
			i++;
		}
		p = p->next;
	}
	return wagePeople;
}

Technician* ListTe::searchRangeLeave(double min, double max)
{
	Node<Technician>* p = head;
	Technician* leavePeople = new Technician;
	int i = 0;
	while (p != NULL)
	{
		if (p->item.showLeaveDays() >= min && p->item.showLeaveDays() < max)
		{
			leavePeople[i] = p->item;
			i++;
		}
		p = p->next;
	}
	return leavePeople;
}

double ListTe::averageWage()
{
	Node<Technician>* p = head;
	double sum = 0;
	double average;
	while (p != NULL)
	{
		sum = sum + p->item.pay();
		p = p->next;
	}
	average = sum / sumPeople;
	return average;
}

void ListTe::insert(Technician item)
{
	if (head == NULL) {
		head = tail = new Node<Technician>(item);
		head->next = NULL;
		tail->next = NULL;
	}
	else {
		Node<Technician>* p = new Node<Technician>(item);
		tail->next = p;
		tail = p;
		tail->next = NULL;
	}
	this->sumPeople++;
}
