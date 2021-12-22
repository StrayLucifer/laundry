#ifndef ListOfClients_H
#define ListOfClients_H
#include <list>
#include "Client.h" 
#include <iomanip>

//////////////////Класс ListOfClients//////////////////////
//Класс записей о клиентах
class ListOfClients
{
private:
	// установить указатели на клиентов
	list <Client*> ListClient; // указатели на класс клиент
	list <Client*>::iterator IterClient; //итератор
public:
	~ListOfClients(); // деструктор (удаление клиентов)
	void insertClient(Client*); // добавить клиента в список
	void display(); // вывод списка клиентов
	void DeleteClient();
}; // конец класса ListOfClients
#endif