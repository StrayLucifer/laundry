#include "ExpenseInputScreen.h"

void ExpenseInputScreen::setExpense(ExpenseRecord& ExpenseRecord, Expense & _Expense)
{
	int month, day;
	string category, payee;
	float amount;
	cout << "Введите месяц (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "Введите день (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "Введите категорию расходов (Ремонт, Налоги): ";
	getline(cin, category);
	cout << "Введите получателя (ПростоквашиноЭлектроСбыт): ";
	getline(cin, payee);
	cout << "Введите сумму (39.95): ";
	cin >> amount;
	_Expense.setTotalExpense(amount);
	cin.ignore(80, '\n');
	// создаем новый расход
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// вставляем расход в список всех расходов
	ExpenseRecord.insertExp(ptrExpense);
	cout << "\n";
}