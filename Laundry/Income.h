#ifndef Income_H
#define Income_H
#include <iostream>
#include <iomanip>
using namespace std;

//////////////////Income//////////////////////
//����� ��� ������ � ��������
class Income
{
private:
	int IncomeMonth[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int TotalProfit = 0;
public:
	void setIncomeMonth(int i, int income);
	int getTotalProfit();
	void display();
};// ����� ������ Income
#endif