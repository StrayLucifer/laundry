#include "ExpenseInputScreen.h"

void ExpenseInputScreen::setExpense(ExpenseRecord& ExpenseRecord, Expense & _Expense)
{
	int month, day;
	string category, payee;
	float amount;
	cout << "¬ведите мес€ц (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "¬ведите день (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "¬ведите категорию расходов (–емонт, Ќалоги): ";
	getline(cin, category);
	cout << "¬ведите получател€: ";
	getline(cin, payee);
	cout << "¬ведите сумму: ";
	cin >> amount;
	_Expense.setTotalExpense(amount);
	cin.ignore(80, '\n');
	// создаем новый расход
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// вставл€ем расход в список всех расходов
	ExpenseRecord.insertExp(ptrExpense);
	cout << "\n";
}