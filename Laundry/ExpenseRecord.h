#include <iostream>
#include <vector>
#include <list>
#include "Expense.h"

using namespace std; 

//Класс записей о затратах
class ExpenseRecord
{
private:
	vector<Expense*> VectorExpenses; //вектор указателей на расходы
	vector<Expense*>::iterator IterExpenses;
public:
	~ExpenseRecord();
	void insertExp(Expense*);
	void display();
	void annualReport(Income& _Income, Expense &_Expense);
	//float displaySummary(); // нужно для годового отчета
};