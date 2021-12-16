#include "ClientInputScreen.h"

void ClientInputScreen::setClient(ListOfClients& _ListOfClients, Income& _Income) // добавить данные о клиенте
{
	cout << "¬ведите ‘»ќ клиента: " << endl;
	tName = "";
	while (tName == "")
	{
		getline(cin, tName);
	}
	system("cls");
	cout << "¬ведите номер телефона:" << endl;
	cout << "+";
	getline(cin, tPhone);
	system("cls");
	cout << "“ип услуги:" << endl;
	getline(cin, tTypeOfService);
	system("cls");
	cout << "¬ведите дату:" << endl;
	cin >> tDate;
	do
	{
		system("cls");
		cout << "¬ведите мес€ц:" << endl;
		cin >> tMonth;
		if (tMonth > 12 || tMonth <= 0)
		{
			cout << "¬ведЄн неправльный формат мес€ца" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	do
	{
		system("cls");
		cout << "¬ведите стоимость услуги:" << endl;
		cin >> tPay;
		if (tPay < 0)
		{
			cout << "¬ведЄн неправльный формат стоимости услуги" << endl;
			cout << "\n";
			system("pause");
		}
		else break;
	} while (true);
	system("cls");
	_Income.setIncomeMonth(tMonth, tPay);
	Client* ptrClient = new Client(tName, tPhone, tTypeOfService, tDate, tMonth, tPay); // создать клиента
	_ListOfClients.insertClient(ptrClient); // занести в список клиента
}