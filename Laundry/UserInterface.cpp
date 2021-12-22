#include <iostream>
#include <conio.h>
#include "UserInterface.h"

void UserInterface::interact()
{
	Client _Client;
	ListOfClients _ListOfClients;
	ClientInputScreen _ClientInputScreen;
	Expense _Expense;
	ExpenseRecord _ExpenseRecord;
	ExpenseInputScreen _ExpenseInputScreen;
	Income _Income;
	while (true)
	{
		cout << "\n";
		cout << " Для ввода данных нажмите '1' \n" << " Для вывода данных нажмите '2' \n" << " Для удаления клиента нажмите '3' \n" << " Для выхода 'q' \n";
		key = _getch();
		system("cls");
		if (key == '1') // ввод данных
		{
			cout << "\n";
			cout << " Для добавление клиента нажмите '1' \n" << " Для записи расходов нажмите '2' \n" << " Вернуться назад '3'\n";
			key = _getch();
			system("cls");
			switch (key)
			{

			case '1':
				cout << "\n";
				_ClientInputScreen.setClient(_ListOfClients, _Income);
				break;
			case '2':
				cout << "\n";
				_ExpenseInputScreen.setExpense(_ExpenseRecord, _Expense);
				system("pause");
				system("cls");
				break;
			case '3':
				system("cls");
				break;
			default:
				cout << "Неизвестная функция\n";
				cout << "\n";
				system("pause");
				system("cls");
				break;
			} // конец секции switch
		} // конец условия if
		else if (key == '2') // вывод данных
		{
			cout << "\n";
			cout << " Для вывода клиентов нажмите '1' \n" << " Для вывода дохода нажмите '2' \n" << " Для вывода расходов нажмите '3' \n" << " Для вывода годового отчета нажмите '4' \n" << " Вернуться назад '5' \n";
			key = _getch();
			system("cls");
			switch (key)
			{
			case '1':
				system("cls");
				cout << "\n";
				_ListOfClients.display();
				system("pause");
				system("cls");
				break;
			case '2':
				cout << "\n";
				_Income.display();
				system("pause");
				system("cls");
				break;
			case '3':
				cout << "\n";
				_ExpenseRecord.display();
				system("pause");
				system("cls");
				break;
			case '4':
				cout << "\n";
				_ExpenseRecord.annualReport(_Income, _Expense);
				system("pause");
				system("cls");
				break;
			case '5':
				cout << "\n";
				system("cls");
				break;
			default:
				cout << "Неизвестная функция вывода\n";
				system("pause");
				break;
			} // конец switch
		} // конец elseif
		else if (key == '3')
		{
			_ListOfClients.DeleteClient();
		}
		else if (key == 'q' || key == 'й')
			return; // выход
		else
		{
			cout << "--------------------------------------------------\n";
			cout << "!!!!!!!!!!!!! Неизвестная функция !!!!!!!!!!!!!!!!\n";
			cout << "--------------------------------------------------\n";
			cout << "\n";
			system("pause");
			system("cls");
		}
	} // конец while
} // конец метода interact()
