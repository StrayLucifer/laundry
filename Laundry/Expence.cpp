#include "Expense.h"

int Expense::getTotalExpense()
{
	return TotalExpense;
}

int Expense::getAmount()
{
	return Amount;
}

string Expense::getCategory()
{
	return Category;
}

string Expense::ConvDay()
{
	string sDay;
	if (Day < 10)
	{
		sDay = "0" + std::to_string(Day);
		return sDay;
	}
	else return std::to_string(Day);
}

int Expense::getDay()
{
	return Day;
}

string Expense::ConvMonth()
{
	string sMonth;
	if (Month < 10)
	{
		sMonth = "0" + std::to_string(Month);
		return sMonth;
	}
	else return std::to_string(Month);
}

int Expense::getMonth()
{
	return Month;
}

string Expense::getPayee()
{
	return Payee;
}


void Expense::setTotalExpense(int expens)
{
	TotalExpense = TotalExpense + expens;
}