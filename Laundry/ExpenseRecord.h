#ifndef ExpenseRecord_H
#define ExpenseRecord_H
#include <iostream>
#include <vector>
#include <iomanip>
#include "Expense.h"
#include "Income.h"
using namespace std; 

//////////////////Класс ExpenseRecord//////////////////////
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
};// конец класса ExpenseRecord
#endif
