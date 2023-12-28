#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese");

	int soma = 0;

	for (int num = 0; num <= 100; num++) 
	{
		soma = soma + num;
	}
	std::cout << "A soma dos valores de 1 a 100 é: " << soma << std::endl;

	system("PAUSE");
	return 0;
}
