#include "ListMa.h"
#include"Node.h"

ListMa::ListMa()
{
	head = tail = NULL;
}

double ListMa::sumWage()
{
	Node<Manage>* p=head;
	double sum = 0;
	while (p != NULL)
	{
		sum = sum + p->item.pay();
		p = p->next;
	}
	return sum;
}

Manage ListMa::searchMaxWage()
{
	Node<Manage>* p = head;
	Manage maxWagePeople;
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

Manage ListMa::searchMinWage()
{
	Node<Manage>* p = head;
	Manage minWagePeople;
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

Manage ListMa::searchMaxLeave()
{
	Node<Manage>* p = head;
	Manage maxLeavePeople;
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

Manage ListMa::searchMinLeave()
{
	Node<Manage>* p = head;
	Manage minLeavePeople;
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

Manage* ListMa::searchRangeWage(double min,double max)
{
	Node<Manage>* p = head;
	Manage *wagePeople = new Manage;
	int i = 0;
	while (p != NULL)
	{
		if (p->item.pay()>=min&& p->item.pay() < max)
		{
			wagePeople[i] = p->item;
			i++;
		}
		p = p->next;
	}
	return wagePeople;
}

Manage* ListMa::searchRangeLeave(double min, double max)
{
	Node<Manage>* p = head;
	Manage* leavePeople=new Manage;
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

double ListMa::averageWage()
{
	Node<Manage>* p = head;
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

void ListMa::insert(Manage item)
{
	if (head == NULL) {
		head = tail = new Node<Manage>(item);
		head->next = NULL;
		tail->next = NULL;
	}
	else {
		Node<Manage>* p = new Node<Manage>(item);
		tail->next = p;
		tail = p;
		tail->next = NULL;
	}
	this->sumPeople++;
}
