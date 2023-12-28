#include <iostream>
#include <locale.h>
#include <ctime>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");

	srand((unsigned)time(0));

	int sort;

	system("color 2");
	for (int num = 0; num < 1;) 
	{
		sort = (rand() % 2);
		
		cout << sort << " ";
	}

	system("PAUSE");
	return 0;
}
