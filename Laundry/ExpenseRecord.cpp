#include "ExpenseRecord.h"

void ExpenseRecord::display() // распечатываем все расходы
{
	cout << "\nДата\tПолучатель\tСумма\tКатегория\n"
		<< "----------------------------------------\n" << endl;
	if (VectorExpenses.size() == 0) // В контейнере нет расходов
		cout << "***Расходов нет***\n" << endl;
	else
	{
		IterExpenses = VectorExpenses.begin();
		while (IterExpenses != VectorExpenses.end())
		{ // распечатываем все расходы
			cout << (*IterExpenses)->Month << '/' << (*IterExpenses)->Day << '\t' << (*IterExpenses)->Payee << '\t' << '\t';
			cout << (*IterExpenses)->Amount << '\t' << (*IterExpenses)->Category << endl;
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
		cout << '\t' << ((*IterExpenses)->Category) << '\t' << ((*IterExpenses)->Amount) << endl;
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
