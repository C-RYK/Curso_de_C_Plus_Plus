#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese");

	double numero1, numero2;
	bool ver1, ver2;
	std::cout << "Dígite um valor: ";
	std::cin >> numero1;

	std::cout << "Dígite outro valor: ";
	std::cin >> numero2;

	ver1 = (numero1 > numero2) && (numero2 < 1000);

	ver2 = (numero2 != 55) || (numero2 > 100) && (numero2 < 200);

	std::cout << "Numero1 maior que numero 2 e numero2 menor que 1000: " << ver1 << "\n";

	std::cout << "Numero2 diferente de 55 ou numero2  maior que 100 e numero2 menor que 200: " << ver2 << std::endl;

	return 0;

	system("PAUSE");
}
