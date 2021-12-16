#include "ClientInputScreen.h"

void ClientInputScreen::setClient(ListOfClients& _ListOfClients, Income& _Income) // �������� ������ � �������
{
	cout << "������� ��� �������: " << endl;
	tName = "";
	while (tName == "")
	{
		getline(cin, tName);
	}
	system("cls");
	cout << "������� ����� ��������:" << endl;
	cout << "+";
	getline(cin, tPhone);
	system("cls");
	cout << "��� ������:" << endl;
	getline(cin, tTypeOfService);
	system("cls");
	cout << "������� ����:" << endl;
	cin >> tDate;
	do
	{
		system("cls");
		cout << "������� �����:" << endl;
		cin >> tMonth;
		if (tMonth > 12 || tMonth <= 0)
		{
			cout << "����� ����������� ������ ������" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	do
	{
		system("cls");
		cout << "������� ��������� ������:" << endl;
		cin >> tPay;
		if (tPay < 0)
		{
			cout << "����� ����������� ������ ��������� ������" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	_Income.setIncomeMonth(tMonth, tPay);
	Client* ptrClient = new Client(tName, tPhone, tTypeOfService, tDate, tMonth, tPay); // ������� �������
	_ListOfClients.insertClient(ptrClient); // ������� � ������ �������
}