#include "Client.h"

string Client::getName() //геттер возвращает ФИО клиента
{
	return name;
}
//--------------------------------------------------------

string Client::getPhone() //геттер возвращает ФИО клиента
{
	return phone;
}
//--------------------------------------------------------

int Client::getDate()
{
	return date;
}

int Client::getMonth()
{
	return month;
}

int Client::getPay()
{
	return pay;
}

Client::Client(string n, string t, int d, int m, int p) : name(n), phone(t), date(d), month(m), pay(p)
{
	/* тут пусто */
}
