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
		std::cout << "D�gite o primeiro valor: ";
		std::cin >> num1;
		std::cout << "D�gite o segundo valor: ";
		std::cin >> num2;
		std::cout << "D�gite o terceiro valor: ";
		std::cin >> num3;

		std::cout << "Os valores d�gitados foram " << num1 << ", " << num2 << ", " << num3 << "." "\n";
		cal = (num1 + num2 + num3) / 3;
		std::cout << "A m�dia dos n�meros � " << cal << "\n";

		std::cout << "Deseja calucular outra m�dia ? [S / N]: ";
		std::cin >> resposta;
	} while (resposta == 'S' || resposta == 's');

	std::cout << "Programa encerrado...";
	system("PAUSE");

	return 0;
}
