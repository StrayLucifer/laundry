#incude "Expence.h"
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

int Expense::getDay()
{
	return Day;
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