#include <list>
#include "Client.h" 
//////////////////����� ListOfClients//////////////////////
class ListOfClients
{
private:
	// ���������� ��������� �� ��������
	list <Client*> ListClient; // ��������� �� ����� ������
	list <Client*>::iterator IterClient; //��������
public:
	//~ListOfClients(); // ���������� (�������� ��������)
	void insertClient(Client*); // �������� ������� � ������
	void display(); // ����� ������ ��������
}; // ����� ������ ListOfClients
