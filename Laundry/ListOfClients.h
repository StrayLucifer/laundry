#ifndef ListOfClients_H
#define ListOfClients_H
#include <list>
#include "Client.h" 
#include <iomanip>

//////////////////����� ListOfClients//////////////////////
//����� ������� � ��������
class ListOfClients
{
private:
	// ���������� ��������� �� ��������
	list <Client*> ListClient; // ��������� �� ����� ������
	list <Client*>::iterator IterClient; //��������
public:
	~ListOfClients(); // ���������� (�������� ��������)
	void insertClient(Client*); // �������� ������� � ������
	void display(); // ����� ������ ��������
	void DeleteClient();
}; // ����� ������ ListOfClients
#endif