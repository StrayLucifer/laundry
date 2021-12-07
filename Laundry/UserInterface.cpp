#include <iostream>
#include <conio.h>
#include "UserInterface.h"


void UserInterface::interact()
{
	while (true)
	{
		cout << "Для ввода данных нажмите '1' \n" << "Для вывода данных нажмите  '2' \n" << "Для выхода 'q': \n";
		key = _getch();
		system("cls");
		if (key == '1') // ввод данных
		{
			cout << " Для добавление клиента нажмите '1', \n" << " Для записи расходов нажмите '2', \n";
			key = _getch();
			system("cls");
			switch (key)
			{

			case '1':
				system("pause");
				system("cls");
				break;
			case '2':

				system("pause");;
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
			cout << "Для вывода клиентов нажмите '1', \n" << "Для вывода дохода нажмите '2' \n" << "Для вывода расходов нажмите '3', \n" << "Для вывода годового отчета нажмите '4': \n";
			key = _getch();;
			switch (key)
			{
			case '1':
				system("cls");
				system("pause");
				system("cls");
				break;
			case '2':
				system("pause");
				system("cls");
				break;
			case '3':
				system("pause");
				system("cls");
				break;
			case '4':
				system("pause");;
				system("cls");
				break;
			default:
				cout << "Неизвестная функция вывода\n";
				system("pause");
				break;
			} // конец switch
		} // конец elseif
		else if (key == 'q')
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
