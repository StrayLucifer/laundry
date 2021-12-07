#include <iostream>
#include <vector>
#include <list>
#include "Expense.h"

using namespace std; 

class ExpenseRecord
{
public:
	~ExpenseRecord();
	void insertExp(Expense*);
	void display();
	//float displaySummary(); // нужно для годового отчета

private:
	vector<Expense*> VectorExpenses; //вектор указателей на расходы
	vector<Expense*>::iterator IterExpenses;
};