#include "ExpenseInputScreen.h"

void ExpenseInputScreen::setExpense(ExpenseRecord& ExpenseRecord, Expense & _Expense)
{
	int month, day;
	string category, payee;
	float amount;
	do {
		system("cls");
		cout << "\n";
		cout << "������� �����:" << endl;
		cin >> month;
		if (month > 12 || month <= 0)
		{
			cout << "������������ ������ ������!" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	cin.ignore(80, '\n');
	do {
		system("cls");
		cout << "\n";
		cout << "������� ����:" << endl;
		cin >> day;
		if (day > 31 || day <= 0)
		{
			cout << "������������ ������ ���!" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	cout << "\n";
	cin.ignore(80, '\n');
	cout << "������� ��������� �������� (������, ������): ";
	getline(cin, category);
	cout << "������� ����������: ";
	getline(cin, payee);
	cout << "������� ����� � ������: ";
	cin >> amount;
	_Expense.setTotalExpense(amount);
	cin.ignore(80, '\n');
	// ������� ����� ������
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// ��������� ������ � ������ ���� ��������
	ExpenseRecord.insertExp(ptrExpense);
	cout << "\n";
}