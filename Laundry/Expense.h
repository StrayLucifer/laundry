#include <string>
class Expense
{
public:
	int Month, Day; // ����� � ���� ������ ��������
	string Category; // ��������� �������� (���, ����, ������ � ��) 
	string Payee; // ���� ������ (���������� ����, �����, ��������� �����...)
	float Amount; // ������� ������
	Expense()
	{ }
	Expense(int m, int d, string c, string p, float a) :
		Month(m), Day(d), Category(c), Payee(p), Amount(a)
	{
		/* ��� �����! */
	}
};