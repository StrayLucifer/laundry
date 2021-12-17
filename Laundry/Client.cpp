#include "Client.h"

string Client::getName() //геттер возвращает ФИО клиента
{
	return Name;
}
//--------------------------------------------------------

string Client::getPhone() //геттер возвращает ФИО клиента
{
	return Phone;
}
//--------------------------------------------------------

int Client::getDate()
{
	return Date;
}

int Client::getMonth()
{
	return Month;
}

int Client::getPay()
{
	return Pay;
}

string Client::getTypeOfService()
{
	return TypeOfService;
}

Client::Client(string name, string phone, string typeofservice, int date, int month, int pay) : Name(name), Phone(phone), TypeOfService(typeofservice), Date(date), Month(month), Pay(pay)
{
	/* тут пусто */
}

Client::Client()
{

}

Client::~Client()
{

}
