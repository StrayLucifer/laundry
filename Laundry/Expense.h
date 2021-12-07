#include <string>
class Expense
{
public:
	int Month, Day; // месяц и день уплаты расходов
	string Category; // категория расходов (газ, свет, ремонт и тд) 
	string Payee; // кому платим (поставщики газа, света, сервисный центр...)
	float Amount; // сколько платим
	Expense()
	{ }
	Expense(int m, int d, string c, string p, float a) :
		Month(m), Day(d), Category(c), Payee(p), Amount(a)
	{
		/* тут пусто! */
	}
};