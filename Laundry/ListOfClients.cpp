#include "ListOfClients.h"
using namespace std;

void ListOfClients::DeleteClient()
{
	string delFIO = "";
	if (ListClient.empty())
	{
		cout << "-------------  Нечего удалять, так как нет клиентов  -------------" << endl;
		cout << "\n";
	}
	else {
		cout << "Введите ФИО клиента, которого хотите удалить:" << endl;
		while (delFIO == "")
		{
			getline(cin, delFIO);
		}
		system("cls");
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // распечатываем всех жильцов
		{
			if ((*IterClient)->getName() == delFIO)
			{
				cout << "\n";
				ListClient.erase(IterClient);
				cout << "Клиент успешно удалён!" << endl;
				cout << "\n";
				IterClient = ListClient.end();
				break;
			}
			else
			{
				*IterClient++;
			}
			if (IterClient == ListClient.end())
			{
				cout << "\n";
				cout << "Клиента с таким ФИО не сущетсвует!" << endl;
				cout << "\n";
				break;
			}
		}
	}
	system("pause");
	system("cls");
}

ListOfClients::~ListOfClients() // деструктор
{ // удалить объекты ListOfClients
//удалить указатели на вектор
	while (!ListClient.empty())
	{
		IterClient = ListClient.begin(); 
		delete* IterClient; // Удаляет объект из д памяти
		ListClient.erase(IterClient); // Удаляет объект из листа
	}
}

void ListOfClients::insertClient(Client* ptrT)
{
	ListClient.push_back(ptrT); // вставка нового клиента в список
}

void ListOfClients::display() // вывод списка клиентов
{
	cout << setw(20) << "ФИО клиента "<< setw(14) << " || " <<setw(20) << "Номер телефона" << setw(8) << " || " <<setw(14) << "Тип услуги " << setw(5) <<  " || " << setw(9) << "Дата" << setw(9) << " || " << "Стоимость услуги" << endl;
	if (ListClient.empty()) // если список клиентов пуст
		cout << "***Клиентов нет***\n" << endl; // выводим запись, что он пуст)
	else
	{
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // распечатываем всех жильцов
		{
			cout << setw(30) << (*IterClient)->getName() << " || " << setw(13) << "+" <<(*IterClient)->getPhone() << " || "<< setw(15) << (*IterClient)->getTypeOfService() << " || " << setw(8) << (*IterClient)->ConvDate() << "/" << (*IterClient)->ConvMonth() << setw(7) << " || " << setw(7)<< (*IterClient)->getPay() << endl;
			*IterClient++;
		}
	}
	cout << "\n";
}