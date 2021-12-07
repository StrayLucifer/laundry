using namespace std;
#include <string>
#include <iostream>
#include <ListOfClients.h>
#include <Client.h>

////////////////класс ClientInputScreen////////////////////
//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана»,
class ClientInputScreen
{
private:
	string tName;
	string tPhone;
	int tDate;
	int tMonth;
	int tPay;
public:
	/*ClientInputScreen();*/
	void setClient(ListOfClients& TheListOfClients); // добавить данные о клиенте
};