#include "UserInterface.h"
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0;
}

