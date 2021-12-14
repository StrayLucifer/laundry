#include "Income.h"

void Income::setIncomeMonth(int i, int income)
{
	IncomeMonth[i] = IncomeMonth[i] + income;
	TotalProfit = TotalProfit + income;
}

int Income::getTotalProfit()
{
	return TotalProfit;
}

void Income::display()
{
	cout << "\n�����\t���\t���\t���\t���\t���\t���\t���\t���\t���\t���\t���\t���\n" << endl
		<< "----------------------------------------------------------------------------------------------------\n" << endl;
	if (TotalProfit == 0)
		cout << "***��� ��������!***\n" << endl;
	else
	{
		for (int i = 1; i <= 12; i++)
		{
			if (IncomeMonth[i] == 0)
			{
				cout << " 0 ";
			}
			else
				cout << "\t" << IncomeMonth[i] << "\t";
		}
	}
	cout << "\n";
	cout << "\n";
	cout << "��������� �������:" << TotalProfit << endl;
	cout << "\n";
}
