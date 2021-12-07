#include <string>
#include <iostream>
//#include <ListOfClients.h>

using namespace std;

class Client
{
private:
	string name; // имя клиента
	string phone;  // номер телефона клиента
	int date;
	int month;
	int pay;
public:
	Client();
	Client(string n, string t, int d, int m, int p);
	//~Client();
	string getName(); //возвращает ФИО клиента
	string getPhone(); //возвращает номер телефона клиента
	int getDate();
	int getMonth();
	int getPay();

};
