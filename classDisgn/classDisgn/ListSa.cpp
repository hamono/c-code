#include "ListSa.h"
#include"Node.h"

ListSa::ListSa()
{
	head = tail = NULL;
}

double ListSa::sumWage()
{
	Node<Salor>* p = head;
	double sum = 0;
	while (p != NULL)
	{
		sum = sum + p->item.pay();
		p = p->next;
	}
	return sum;
}

Salor ListSa::searchMaxWage()
{
	Node<Salor>* p = head;
	Salor maxWagePeople;
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

Salor ListSa::searchMinWage()
{
	Node<Salor>* p = head;
	Salor minWagePeople;
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

Salor ListSa::searchMaxLeave()
{
	Node<Salor>* p = head;
	Salor maxLeavePeople;
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

Salor ListSa::searchMinLeave()
{
	Node<Salor>* p = head;
	Salor minLeavePeople;
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

Salor* ListSa::searchRangeWage(double min, double max)
{
	Node<Salor>* p = head;
	Salor* wagePeople=new Salor;
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

Salor* ListSa::searchRangeLeave(double min, double max)
{
	Node<Salor>* p = head;
	Salor* leavePeople=new Salor;
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

double ListSa::averageWage()
{
	Node<Salor>* p = head;
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

void ListSa::insert(Salor item)
{
	if (head == NULL) {
		head = tail = new Node<Salor>(item);
		head->next = NULL;
		tail->next = NULL;
	}
	else {
		Node<Salor>* p = new Node<Salor>(item);
		tail->next = p;
		tail = p;
		tail->next = NULL;
	}
	this->sumPeople++;
}
