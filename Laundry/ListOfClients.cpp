#include "ListOfClients.h"
using namespace std;
void ListOfClients::display() // вывод списка клиентов
{
	cout << "\nФИО клиента\tНомер телефона\tДата\tСтоимость услуги\n--------------------------------------------------------\n";
	if (ListClient.empty()) // если список клиентов пуст
		cout << "***Клиентов нет***\n" << endl; // выводим запись, что он пуст)
	else
	{
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // распечатываем всех жильцов
		{
			cout << (*IterClient)->getName() << " || " << (*IterClient)->getPhone() << " || " << (*IterClient)->getDate() << "." << (*IterClient)->getMonth() << " || " << (*IterClient)->getPay() << endl;
			*IterClient++;
		}
	}
	void ListOfClients::insertClient(Client * ptrT)
	{
		ListClient.push_back(ptrT); // вставка нового клиента в список
	}
}