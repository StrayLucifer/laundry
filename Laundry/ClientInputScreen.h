using namespace std;
#include <string>
#include <iostream>
#include <ListOfClients.h>
#include <Client.h>

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
public:
	/*ClientInputScreen();*/
	void setClient(ListOfClients& TheListOfClients); // �������� ������ � �������
};