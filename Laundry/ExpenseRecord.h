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
	//float displaySummary(); // ����� ��� �������� ������

private:
	vector<Expense*> VectorExpenses; //������ ���������� �� �������
	vector<Expense*>::iterator IterExpenses;
};