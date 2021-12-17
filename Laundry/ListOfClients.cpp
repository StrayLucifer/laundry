#include "ListOfClients.h"
using namespace std;

void ListOfClients::DeleteClient()
{
	string delFIO = "";
	if (ListClient.empty())
	{
		cout << "-------------  ������ �������, ��� ��� ��� ��������  -------------" << endl;
		cout << "\n";
	}
	else {
		cout << "������� ��� �������, �������� ������ �������:" << endl;
		while (delFIO == "")
		{
			getline(cin, delFIO);
		}
		system("cls");
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // ������������� ���� �������
		{
			if ((*IterClient)->getName() == delFIO)
			{
				cout << "\n";
				ListClient.erase(IterClient);
				cout << "������ ������� �����!" << endl;
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
				cout << "������� � ����� ��� �� ����������!" << endl;
				cout << "\n";
				break;
			}
		}
	}
	system("pause");
	system("cls");
}

ListOfClients::~ListOfClients() // ����������
{ // ������� ������� ListOfClients
//������� ��������� �� ������
	while (!ListClient.empty())
	{
		IterClient = ListClient.begin();
		delete* IterClient;
		ListClient.erase(IterClient);
	}
}

void ListOfClients::insertClient(Client* ptrT)
{
	ListClient.push_back(ptrT); // ������� ������ ������� � ������
}

void ListOfClients::display() // ����� ������ ��������
{
	cout << setw(30) << "��� ������� " << " || "  << "����� ��������" << setw(14) << " || "  << "��� ������ " << setw(8) <<  " || " << "����" << setw(15) << " || " << "��������� ������" << endl;
	//cout << "\n��� �������\t����� ��������\t��� ������\t����\t��������� ������\n--------------------------------------------------------\n";
	if (ListClient.empty()) // ���� ������ �������� ����
		cout << "***�������� ���***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		IterClient = ListClient.begin();
		while (IterClient != ListClient.end()) // ������������� ���� �������
		{
			cout << setw(30) << (*IterClient)->getName() << " || " << setw(13) << "+" <<(*IterClient)->getPhone() << " || "<< setw(15) << (*IterClient)->getTypeOfService() << " || " << setw(12) << (*IterClient)->getDate() << "." << (*IterClient)->getMonth() << " || " << setw(7)<< (*IterClient)->getPay() << endl;
			*IterClient++;
		}
	}
	cout << "\n";
}