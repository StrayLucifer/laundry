#include "ExpenseRecord.h"

void ExpenseRecord::display() // ������������� ��� �������
{
	cout << setw(8) << "����" << setw(5) << "||" << setw(23) << "����������" << setw(15) << "||" << setw(15) << "�����" << setw(10) << "||" << setw(15) << "���������" << endl;
	if (VectorExpenses.size() == 0) // � ���������� ��� ��������
	{
		cout << "" << endl;
		cout << setw(60) << "***�������� ���***\n" << endl;
	}
	else
	{
		IterExpenses = VectorExpenses.begin();
		while (IterExpenses != VectorExpenses.end())
		{ // ������������� ��� �������
			cout << setw(5) << (*IterExpenses)->getMonth() << '/' << (*IterExpenses)->getDay()<< setw(5) << "||" << setw(26) << (*IterExpenses)->getPayee() << setw(12) << "||" << "";
			cout << setw(15) <<(*IterExpenses)->getAmount() << setw(10) << "||" << setw(15) << (*IterExpenses)->getCategory() << endl;
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
