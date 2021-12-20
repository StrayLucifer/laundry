#include "ExpenseInputScreen.h"

void ExpenseInputScreen::setExpense(ExpenseRecord& ExpenseRecord, Expense & _Expense)
{
	int month, day;
	string category, payee;
	float amount;
	cout << "������� ����� (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "������� ���� (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "������� ��������� �������� (������, ������): ";
	getline(cin, category);
	cout << "������� ����������: ";
	getline(cin, payee);
	cout << "������� �����: ";
	cin >> amount;
	_Expense.setTotalExpense(amount);
	cin.ignore(80, '\n');
	// ������� ����� ������
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// ��������� ������ � ������ ���� ��������
	ExpenseRecord.insertExp(ptrExpense);
	cout << "\n";
}