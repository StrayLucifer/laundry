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
	cout << setw(95) << "Месяцы" << endl;
	cout << "" << endl;
	cout << setw(8) << "Янв" << setw(8) << " || " << setw(8) << "Фев" << setw(8) << " || " << setw(8) << "Мар" << setw(8) << " || "<< setw (8) << "Апр" << setw(8) << " || " << setw(8) << "Май" << setw(8) << " || " << setw(8) << "Июн" << setw(8) << " || " << setw(8) << "Июл" << setw(8) << " || " << setw(8) << "Авг" << setw(8) << " || " << setw (8) << "Сен" << setw(8) << " || " << setw (8) << "Окт" << setw(8) << "|| " << setw (8) << "Ноя" << setw(8) << " || " << setw (8) << "Дек" << setw(8) << " || " << setw (8) << endl;
		//cout << "----------------------------------------------------------------------------------------------------\n" << endl;
	if (TotalProfit == 0)
	{
		cout << "" << endl;
		cout << setw(110) << "***Нет платежей!***\n" << endl;
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
	cout << "Суммарная прибыль:" << TotalProfit << endl;
	cout << "\n";
}
