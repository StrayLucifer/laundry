#ifndef Client_H
#define Client_H

#include <string>
#include <iostream>
using namespace std;


//////////////////Класс Client//////////////////////
//этот класс содержит свойста(поля) клиента, а также методы для работы с ними
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
	~Client(); 
	string getName(); //возвращает ФИО клиента
	string getPhone(); //возвращает номер телефона клиента
	string getTypeOfService();
	string ConvDate();
	string ConvMonth();
	int getDate();
	int getMonth();
	int getPay();
}; //конец класса Client
#endif