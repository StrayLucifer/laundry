#include "ExpenseRecord.h"

void ExpenseRecord::display() // распечатываем все расходы
{
	cout << setw(8) << "Дата" << setw(5) << "||" << setw(23) << "Получатель" << setw(15) << "||" << setw(15) << "Сумма" << setw(10) << "||" << setw(15) << "Категория" << endl;
	if (VectorExpenses.size() == 0) // В контейнере нет расходов
	{
		cout << "" << endl;
		cout << setw(60) << "***Расходов нет***\n" << endl;
	}
	else
	{
		IterExpenses = VectorExpenses.begin();
		while (IterExpenses != VectorExpenses.end())
		{ // распечатываем все расходы
			cout << setw(5) << (*IterExpenses)->getMonth() << '/' << (*IterExpenses)->getDay()<< setw(5) << "||" << setw(26) << (*IterExpenses)->getPayee() << setw(12) << "||" << "";
			cout << setw(15) <<(*IterExpenses)->getAmount() << setw(10) << "||" << setw(15) << (*IterExpenses)->getCategory() << endl;
			IterExpenses++;
		}
		cout << endl;
	}
}

void ExpenseRecord:: annualReport(Income& _Income, Expense& _Expense)
{
	cout << "Годовой отчет\n--------------\n" << endl;
	cout << "Доходы\n" << endl;
	cout << "\tПрибыль:\t\t";
	cout << _Income.getTotalProfit() << endl;
	cout << "Расходы\n" << endl;
	IterExpenses=VectorExpenses.begin();
	while (IterExpenses != VectorExpenses.end())
	{
		//выводим на экран категории расходов
		cout << '\t' << ((*IterExpenses)->getCategory()) << '\t' << ((*IterExpenses)->getAmount()) << endl;
		IterExpenses++;
	}
	cout << "Расходы всего:\t\t";
	cout << _Expense.getTotalExpense() << endl;
	// вычисляем прибыльность
	cout << "\nБаланс:\t\t\t" << _Income.getTotalProfit()-_Expense.getTotalExpense() << endl;
	cout << "\n";
}

void ExpenseRecord::insertExp(Expense* ptrExp)
{
	VectorExpenses.push_back(ptrExp);
}

ExpenseRecord::~ExpenseRecord() // деструктор
{ // удалить объекты expense
// удалить указатели на вектор
	while (!VectorExpenses.empty())
	{
		IterExpenses = VectorExpenses.begin();
		delete* IterExpenses;
		VectorExpenses.erase(IterExpenses);
	}
}
