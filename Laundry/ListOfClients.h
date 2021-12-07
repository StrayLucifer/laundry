#include <list>
#include "Client.h" 
//////////////////Класс ListOfClients//////////////////////
class ListOfClients
{
private:
	// установить указатели на клиентов
	list <Client*> ListClient; // указатели на класс клиент
	list <Client*>::iterator IterClient; //итератор
public:
	//~ListOfClients(); // деструктор (удаление клиентов)
	void insertClient(Client*); // добавить клиента в список
	void display(); // вывод списка клиентов
}; // конец класса ListOfClients
