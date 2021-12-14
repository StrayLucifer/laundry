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
		delete* IterClient;
		ListClient.erase(IterClient);
	}
}

void ListOfClients::insertClient(Client* ptrT)
{
	ListClient.push_back(ptrT); // вставка нового клиента в список
}

void ListOfClients::display() // вывод списка клиентов
{
	cout << "\nФИО клиента\tНомер телефона\tТип услуги\tДата\tСтоимость услуги\n--------------------------------------------------------\n";
	if (ListClient.empty()) // если список клиентов пуст
		cout << "***Клиентов нет***\n" << endl; // выводим запись, что он пуст)
	else
	{
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // распечатываем всех жильцов
		{
			cout << (*IterClient)->getName() << " || " << (*IterClient)->getPhone() << " || " << (*IterClient)->getTypeOfService() << " || " << (*IterClient)->getDate() << "." << (*IterClient)->getMonth() << " || " << (*IterClient)->getPay() << endl;
			*IterClient++;
		}
	}
	cout << "\n";
}