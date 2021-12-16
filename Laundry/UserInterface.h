#ifndef UserInterface_H
#define UserInterfaces_H
#include "Client.h"
#include "ListOfClients.h"
#include "ClientInputScreen.h"
#include "Expense.h"
#include "ExpenseRecord.h"
#include "ExpenseInputScreen.h"
#include "Income.h"
using namespace std;
//////////////////Класс UserInterface//////////////////////
//Главный класс для запуска приложения: 
//этот класс определяет взаимодействие юзера с программой.
class UserInterface
{
private:
	char key;
public:
	/*UserInterface();
	~UserInterface();*/
	void interact();

}; // конец класса userInterface
#endif
