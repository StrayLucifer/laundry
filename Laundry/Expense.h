#ifndef Expense_H
#define Expense_H
#include <iostream>
#include <string>
using namespace std;

class Expense
{
private:
	int Month = 0, Day = 0; // месяц и день уплаты расходов
	string Category; // категория расходов (газ, свет, ремонт и тд) 
	string Payee; // кому платим (поставщики газа, света, сервисный центр...)
	int Amount = 0; // сколько платим
	int TotalExpense = 0;
public:
	Expense()
	{ }
	Expense(int m, int d, string c, string p, int a) :
		Month(m), Day(d), Category(c), Payee(p), Amount(a)
	{
		/* тут пусто! */
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
