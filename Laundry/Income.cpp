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
	cout << "\nÌåñÿö\tßíâ\tÔåâ\tÌàð\tÀïð\tÌàé\tÈþí\tÈþë\tÀâã\tÑåí\tÎêò\tÍîÿ\tÄåê\n" << endl
		<< "----------------------------------------------------------------------------------------------------\n" << endl;
	if (TotalProfit == 0)
		cout << "***Íåò ïëàòåæåé!***\n" << endl;
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
	cout << "Ñóììàðíàÿ ïðèáûëü:" << TotalProfit << endl;
	cout << "\n";
}
