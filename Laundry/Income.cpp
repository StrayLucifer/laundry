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
	cout << setw(95) << "������" << endl;
	cout << "" << endl;
	cout << setw(8) << "���" << setw(8) << " || " << setw(8) << "���" << setw(8) << " || " << setw(8) << "���" << setw(8) << " || "<< setw (8) << "���" << setw(8) << " || " << setw(8) << "���" << setw(8) << " || " << setw(8) << "���" << setw(8) << " || " << setw(8) << "���" << setw(8) << " || " << setw(8) << "���" << setw(8) << " || " << setw (8) << "���" << setw(8) << " || " << setw (8) << "���" << setw(8) << "|| " << setw (8) << "���" << setw(8) << " || " << setw (8) << "���" << setw(8) << " || " << setw (8) << endl;
		//cout << "----------------------------------------------------------------------------------------------------\n" << endl;
	if (TotalProfit == 0)
	{
		cout << "" << endl;
		cout << setw(110) << "***��� ��������!***\n" << endl;
	}
	else
	{
		for (int i = 1; i <= 12; i++)
		{
			if (IncomeMonth[i] == 0)
			{
				cout << setw(8) << " 0 " << setw(8) << "    ";
			}
			else
				cout << setw(10) << IncomeMonth[i] << setw(6) << "    ";
		}
	}
	cout << "\n";
	cout << "\n";
	cout << "��������� �������:" << TotalProfit << endl;
	cout << "\n";
}
