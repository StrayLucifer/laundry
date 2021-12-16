#include "ExpenseRecord.h"

void ExpenseRecord::display() // ������������� ��� �������
{
	cout << "\n����\t����������\t�����\t���������\n"
		<< "----------------------------------------\n" << endl;
	if (VectorExpenses.size() == 0) // � ���������� ��� ��������
		cout << "***�������� ���***\n" << endl;
	else
	{
		IterExpenses = VectorExpenses.begin();
		while (IterExpenses != VectorExpenses.end())
		{ // ������������� ��� �������
			cout << (*IterExpenses)->getMonth() << '/' << (*IterExpenses)->getDay() << '\t' << (*IterExpenses)->getPayee() << '\t' << '\t';
			cout << (*IterExpenses)->getAmount() << '\t' << (*IterExpenses)->getCategory() << endl;
			IterExpenses++;
		}
		cout << endl;
	}
}

void ExpenseRecord:: annualReport(Income& _Income, Expense& _Expense)
{
	cout << "������� �����\n--------------\n" << endl;
	cout << "������\n" << endl;
	cout << "\t�������:\t\t";
	cout << _Income.getTotalProfit() << endl;
	cout << "�������\n" << endl;
	IterExpenses=VectorExpenses.begin();
	while (IterExpenses != VectorExpenses.end())
	{
		//������� �� ����� ��������� ��������
		cout << '\t' << ((*IterExpenses)->getCategory()) << '\t' << ((*IterExpenses)->getAmount()) << endl;
		IterExpenses++;
	}
	cout << "������� �����:\t\t";
	cout << _Expense.getTotalExpense() << endl;
	// ��������� ������������
	cout << "\n������:\t\t\t" << _Income.getTotalProfit()-_Expense.getTotalExpense() << endl;
	cout << "\n";
}

void ExpenseRecord::insertExp(Expense* ptrExp)
{
	VectorExpenses.push_back(ptrExp);
}

ExpenseRecord::~ExpenseRecord() // ����������
{ // ������� ������� expense
// ������� ��������� �� ������
	while (!VectorExpenses.empty())
	{
		IterExpenses = VectorExpenses.begin();
		delete* IterExpenses;
		VectorExpenses.erase(IterExpenses);
	}
}
