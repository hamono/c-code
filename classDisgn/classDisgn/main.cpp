#include<iostream>
#include<fstream>
#include"Manage.h"
#include"Salor.h"
#include"Technician.h"
#include"ListMa.h"
#include"ListSa.h"
#include"ListTe.h"
#include"Company.h"
using namespace std;

int main()
{
	ofstream outFile("data.txt",ios::out);
	// �����࣬��������������ţ�ְλ���������ʣ�����
	Manage one("ads", 123, "eef", 3000, 5000);
	// �����࣬��������������ţ�ְλ���������ʣ������۶
	Salor two("ads", 123, "eef", 2000, 20000);
	// �����࣬��������������ţ�ְλ���������ʣ�ÿСʱ���ÿ�¹���Сʱ����
	Technician three("ads", 123, "eef", 2000, 20, 180);
	// ��������
	ListMa text1;
	// ��������
	ListSa text2;
	// ��������
	ListTe text3;
	text1.insert(one);
	text2.insert(two);
	text3.insert(three);
	Manage tu1 = text1.searchMaxLeave();
	Salor tu2 = text2.searchMaxLeave();
	Technician tu3 = text3.searchMaxLeave();
	tu1.show();
	tu2.show();
	tu3.show();
	Commpany abc;
	outFile << "����Ĺ��ʣ�" << tu1.pay() << endl;
	outFile << "���۵Ĺ��ʣ�" << tu2.pay() << endl;
	outFile << "�����Ĺ��ʣ�" << tu3.pay() << endl;
	cout<<abc.averageWage(text1, text2, text3);
	outFile << "ƽ�����ʣ�" << abc.averageWage(text1, text2, text3);
}