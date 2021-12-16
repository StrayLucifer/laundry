#ifndef Expense_H
#define Expense_H
#include <iostream>
#include <string>
using namespace std;

class Expense
{
private:
	int Month = 0, Day = 0; // ����� � ���� ������ ��������
	string Category; // ��������� �������� (���, ����, ������ � ��) 
	string Payee; // ���� ������ (���������� ����, �����, ��������� �����...)
	int Amount = 0; // ������� ������
	int TotalExpense = 0;
public:
	Expense()
	{ }
	Expense(int m, int d, string c, string p, int a) :
		Month(m), Day(d), Category(c), Payee(p), Amount(a)
	{
		/* ��� �����! */
	}
	void setTotalExpense(int expens);
	int getTotalExpense();
	int getMonth();
	int getDay();
	int getAmount();
	string getCategory();
	string getPayee();

};
#endif
