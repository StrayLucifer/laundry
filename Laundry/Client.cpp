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

string Client::ConvDate()
{
	string sDate;
	if (Date < 10)
	{
		sDate = "0" + std::to_string(Date);
		return sDate;
	}
	else return std::to_string(Date);
}

int Client::getDate()
{
	/*string sDate;
	if (Date < 10)
	{
		sDate = "0" + std::to_string(Date);
		return sDate;
	}
	else
	{*/
	return Date;
	/*}*/
}

string Client::ConvMonth()
{
	string sMonth;
	if (Month < 10)
	{
		sMonth = "0" + std::to_string(Month);
		return sMonth;
	}
	else return std::to_string(Month);
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
