#include "ClientInputScreen.h"

void ClientInputScreen::setClient(ListOfClients& _ListOfClients) // добавить данные о клиенте
{
	cout << "¬ведите ‘»ќ клиента: " << endl;
	tName = "";
	while (tName == "")
	{
		getline(cin, tName);
	}
	cout << "\n";
	cout << "¬ведите номер телефона:" << endl;
	cout << "+";
	getline(cin, tPhone);
	cout << "\n";
	cout << "¬ведите дату:" << endl;
	cin >> tDate;
	cout << "\n";
	cout << "¬ведите мес€ц:" << endl;
	cin >> tMonth;
	cout << "\n";
	cout << "¬ведите стоимость услуги:" << endl;
	cin >> tPay;
	cout << "\n";
	Client* ptrClient = new Client(tName, tPhone, tDate, tMonth, tPay); // создать клиента
	_ListOfClients.insertClient(ptrClient); // занести в список клиента
}
//---------------------------------------------------------