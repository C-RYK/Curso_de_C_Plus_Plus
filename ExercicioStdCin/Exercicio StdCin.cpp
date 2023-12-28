#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese");

	double num1, num2, num3;
	double cal;
	char resposta;

	do
	{
		std::cout << "Dígite o primeiro valor: ";
		std::cin >> num1;
		std::cout << "Dígite o segundo valor: ";
		std::cin >> num2;
		std::cout << "Dígite o terceiro valor: ";
		std::cin >> num3;

		std::cout << "Os valores dígitados foram " << num1 << ", " << num2 << ", " << num3 << "." "\n";
		cal = (num1 + num2 + num3) / 3;
		std::cout << "A média dos números é " << cal << "\n";

		std::cout << "Deseja calucular outra média ? [S / N]: ";
		std::cin >> resposta;
	} while (resposta == 'S' || resposta == 's');

	std::cout << "Programa encerrado...";
	system("PAUSE");

	return 0;
}
