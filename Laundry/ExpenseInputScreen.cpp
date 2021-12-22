#include "ExpenseInputScreen.h"

void ExpenseInputScreen::setExpense(ExpenseRecord& ExpenseRecord, Expense & _Expense)
{
	int month, day;
	string category, payee;
	float amount;
	do {
		system("cls");
		cout << "\n";
		cout << "Введите месяц:" << endl;
		cin >> month;
		if (month > 12 || month <= 0)
		{
			cout << "Неправильный формат месяца!" << endl;
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
		cout << "Введите день:" << endl;
		cin >> day;
		if (day > 31 || day <= 0)
		{
			cout << "Неправильный формат дня!" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	cout << "\n";
	cin.ignore(80, '\n');
	cout << "Введите категорию расходов (Ремонт, Налоги): ";
	getline(cin, category);
	cout << "Введите получателя: ";
	getline(cin, payee);
	cout << "Введите сумму в рублях: ";
	cin >> amount;
	_Expense.setTotalExpense(amount);
	cin.ignore(80, '\n');
	// создаем новый расход
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// вставляем расход в список всех расходов
	ExpenseRecord.insertExp(ptrExpense);
	cout << "\n";
}