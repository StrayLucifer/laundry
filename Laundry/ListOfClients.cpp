#include "ListOfClients.h"
using namespace std;
void ListOfClients::display() // ����� ������ ��������
{
	cout << "\n��� �������\t����� ��������\t����\t��������� ������\n--------------------------------------------------------\n";
	if (ListClient.empty()) // ���� ������ �������� ����
		cout << "***�������� ���***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // ������������� ���� �������
		{
			cout << (*IterClient)->getName() << " || " << (*IterClient)->getPhone() << " || " << (*IterClient)->getDate() << "." << (*IterClient)->getMonth() << " || " << (*IterClient)->getPay() << endl;
			*IterClient++;
		}
	}
	void ListOfClients::insertClient(Client * ptrT)
	{
		ListClient.push_back(ptrT); // ������� ������ ������� � ������
	}
}