#include "ClientInputScreen.h"

void ClientInputScreen::setClient(ListOfClients& _ListOfClients) // �������� ������ � �������
{
	cout << "������� ��� �������: " << endl;
	tName = "";
	while (tName == "")
	{
		getline(cin, tName);
	}
	cout << "\n";
	cout << "������� ����� ��������:" << endl;
	cout << "+";
	getline(cin, tPhone);
	cout << "\n";
	cout << "������� ����:" << endl;
	cin >> tDate;
	cout << "\n";
	cout << "������� �����:" << endl;
	cin >> tMonth;
	cout << "\n";
	cout << "������� ��������� ������:" << endl;
	cin >> tPay;
	cout << "\n";
	Client* ptrClient = new Client(tName, tPhone, tDate, tMonth, tPay); // ������� �������
	_ListOfClients.insertClient(ptrClient); // ������� � ������ �������
}
//---------------------------------------------------------