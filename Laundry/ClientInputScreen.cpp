#include "ClientInputScreen.h"

void ClientInputScreen::setClient(ListOfClients& _ListOfClients, Income& _Income) // �������� ������ � �������
{
	cout << "������� ��� �������: " << endl;
	tName = "";
	while (tName == "")
	{
		getline(cin, tName);
	}
	tName = tName.substr(0, 30);//����������� �����
	system("cls");
	cout << "������� ����� ��������:" << endl;
	do
	{
		cout << "+";
		getline(cin, tPhone);
		if (tPhone.size() < 11 || tPhone.size() > 11)// ������� ������� ��� ������� ��������
		cout << "\n������,��������� ����\n";
		system("pause");
		system("cls");
	} while (tPhone.size() < 11 || (tPhone.size() > 11));
	system("cls");
	cout << "��� ������:" << endl;
	getline(cin, tTypeOfService);
	tTypeOfService = tTypeOfService.substr(0, 15); //����������� �����
	system("cls");

	//cout << "������� ����:" << endl;
	// cin >> tDate;
	do {
		system("cls");
		cout << "������� ����" << endl;
		cin >> tDate;
		if (tDate > 31 || tDate <= 0)
		{
			cout << "������������ ������ ����" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} 	while (true);
	system("cls");
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
