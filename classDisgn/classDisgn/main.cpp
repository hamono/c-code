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
	// 经理类，参数（姓名，编号，职位，基本工资，奖金）
	Manage one("ads", 123, "eef", 3000, 5000);
	// 销售类，参数（姓名，编号，职位，基本工资，总销售额）
	Salor two("ads", 123, "eef", 2000, 20000);
	// 技术类，参数（姓名，编号，职位，基本工资，每小时酬金，每月工作小时数）
	Technician three("ads", 123, "eef", 2000, 20, 180);
	// 经理链表
	ListMa text1;
	// 销售链表
	ListSa text2;
	// 技术链表
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
	outFile << "经理的工资：" << tu1.pay() << endl;
	outFile << "销售的工资：" << tu2.pay() << endl;
	outFile << "技术的工资：" << tu3.pay() << endl;
	cout<<abc.averageWage(text1, text2, text3);
	outFile << "平均工资：" << abc.averageWage(text1, text2, text3);
}