#ifndef ExpenseInputScreen_H
#define ExpenseInputScreen_H
#include <iostream>
#include "ExpenseRecord.h"
//Класс для ввода расходов 
class ExpenseInputScreen
{
private:
public:
	void setExpense(ExpenseRecord &ExpenseRecord, Expense &_Expense);
};
#endif