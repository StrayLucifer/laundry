#ifndef ClientInputScreen_H
#define ClientInputScreen_H
using namespace std;
#include <string>
#include <iostream>
#include "ListOfClients.h"
#include "Client.h"
#include "Income.h"

////////////////����� ClientInputScreen////////////////////
//����� ClientInputScreen. ��� �����, ���������� �� ����������� �������,
class ClientInputScreen
{
private:
	string tName;
	string tPhone;
	int tDate;
	int tMonth;
	int tPay;
	string tTypeOfService;
public:
	void setClient(ListOfClients& _ListOfClients, Income&  _Income); // �������� ������ � �������
};//����� ������ ClientInputScreen
#endif