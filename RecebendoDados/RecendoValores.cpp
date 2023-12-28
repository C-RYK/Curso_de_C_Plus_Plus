#include <iostream>

int main() 
{
	int soma;
	int sub;
	int mul;
	double div;
	int mod;

	int numero01, numero02;
	std::cout << "Dígite o primeiro valor: ";
	std::cin >> numero01;
	std::cout << "Numero 01 = " << numero01 << std::endl;
	std::cout << "Dígite o segundo valor: ";
	std::cin >> numero02;
	std::cout << "Numero 02= " << numero02 << std::endl;

	soma = numero01 + numero02;
	sub = numero01 - numero02;
	mul = numero01 * numero02;
	div = (double)numero01 / (double)numero02;
	mod = numero01 % numero02;

	std::cout << "A soma dos valores é = " << soma << 
		"\n" << "A subtração dos valores é = " << sub <<
		"\n" << "A multiplicação dos valores é = " << mul <<
		"\n" << "A divisão dos valores é = " << div << 
		"\n" << "O resto da divisão dos valores é = " << mod <<
		"\n";

	system("PAUSE");
}
