#ifndef Client_H
#define Client_H

#include <string>
#include <iostream>

using namespace std;

class Client
{
private:
	string Name; // имя клиента
	string Phone;  // номер телефона клиента
	string TypeOfService;
	int Date;
	int Month;
	int Pay;
public:
	Client();
	Client(string name, string phone, string typeofservice, int date, int month, int pay);
	//~Client();
	string getName(); //возвращает ФИО клиента
	string getPhone(); //возвращает номер телефона клиента
	string getTypeOfService();
	int getDate();
	int getMonth();
	int getPay();
}; 
#endif