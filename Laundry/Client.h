#include <string>
#include <iostream>
//#include <ListOfClients.h>

using namespace std;

class Client
{
private:
	string name; // ��� �������
	string phone;  // ����� �������� �������
	int date;
	int month;
	int pay;
public:
	Client();
	Client(string n, string t, int d, int m, int p);
	//~Client();
	string getName(); //���������� ��� �������
	string getPhone(); //���������� ����� �������� �������
	int getDate();
	int getMonth();
	int getPay();

};
