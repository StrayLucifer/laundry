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
			cout << (*IterExpenses)->Month << '/' << (*IterExpenses)->Day << '\t' << (*IterExpenses)->Payee << '\t' << '\t';
			cout << (*IterExpenses)->Amount << '\t' << (*IterExpenses)->Category << endl;
			IterExpenses++;
		}
		cout << endl;
	}
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