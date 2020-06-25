#include"Node.h"
#include"Manage.h"
#include"Salor.h"
#include"Technician.h"
#include"ListMa.h"
#include"ListSa.h"
#include"ListTe.h"

struct templater
{
	Manage maTemp;
	Salor saTemp;
	Technician teTemp;
};
struct tempLink
{
	Manage *maTemp;
	Salor *saTemp;
	Technician *teTemp;
};

class Commpany
{
public:
	Commpany();
	double sumWage(ListMa ma, ListSa sa, ListTe te);
	templater searchMaxWage(ListMa ma, ListSa sa, ListTe te );
	templater searchMinWage(ListMa ma, ListSa sa, ListTe te);
	templater searchMaxLeave(ListMa ma, ListSa sa, ListTe te);
	templater searchMinLeave(ListMa ma, ListSa sa, ListTe te);
	tempLink searchRangeWage(ListMa ma, ListSa sa, ListTe te, double min, double max);
	tempLink searchRangeLeave(ListMa ma, ListSa sa, ListTe te, double min, double max);
	double averageWage(ListMa ma, ListSa sa, ListTe te);
	~Commpany();

private:
	char* name;
	char* address;
	long double phoneNumber;
};

inline Commpany::Commpany()
{

}

inline double Commpany::sumWage(ListMa ma, ListSa sa, ListTe te)
{
	return ma.sumWage()+sa.sumWage()+te.sumWage();
}

inline templater Commpany::searchMaxWage(ListMa ma, ListSa sa, ListTe te)
{
	templater callBack;
	callBack.maTemp = ma.searchMaxWage();
	callBack.saTemp = sa.searchMaxWage();
	callBack.teTemp = te.searchMaxWage();
	return callBack ;
}

inline templater Commpany::searchMinWage(ListMa ma, ListSa sa, ListTe te)
{
	templater callBack;
	callBack.maTemp = ma.searchMinWage();
	callBack.saTemp = sa.searchMinWage();
	callBack.teTemp = te.searchMinWage();
	return callBack;
}

inline templater Commpany::searchMaxLeave(ListMa ma, ListSa sa, ListTe te)
{
	templater callBack;
	callBack.maTemp = ma.searchMaxLeave();
	callBack.saTemp = sa.searchMaxLeave();
	callBack.teTemp = te.searchMaxLeave();
	return callBack;
}

inline templater Commpany::searchMinLeave(ListMa ma, ListSa sa, ListTe te)
{
	templater callBack;
	callBack.maTemp = ma.searchMinLeave();
	callBack.saTemp = sa.searchMinLeave();
	callBack.teTemp = te.searchMinLeave();
	return callBack;
}

inline tempLink Commpany::searchRangeWage(ListMa ma, ListSa sa, ListTe te, double min, double max)
{
	tempLink callBack;
	callBack.maTemp = ma.searchRangeWage(min,max);
	callBack.saTemp = sa.searchRangeWage(min, max);
	callBack.teTemp = te.searchRangeWage(min, max);
	return callBack;
}

inline tempLink Commpany::searchRangeLeave(ListMa ma, ListSa sa, ListTe te, double min, double max)
{
	tempLink callBack;
	callBack.maTemp = ma.searchRangeLeave(min, max);
	callBack.saTemp = sa.searchRangeLeave(min, max);
	callBack.teTemp = te.searchRangeLeave(min, max);
	return callBack;
}

inline double Commpany::averageWage(ListMa ma, ListSa sa, ListTe te)
{
	return this->sumWage(ma, sa, te)/(ma.sumPeople+sa.sumPeople+te.sumPeople);
}

inline Commpany::~Commpany()
{

}
