#include <iostream>

int main() 
{
	int soma;
	int sub;
	int mul;
	double div;
	int mod;

	int numero01, numero02;
	std::cout << "D�gite o primeiro valor: ";
	std::cin >> numero01;
	std::cout << "Numero 01 = " << numero01 << std::endl;
	std::cout << "D�gite o segundo valor: ";
	std::cin >> numero02;
	std::cout << "Numero 02= " << numero02 << std::endl;

	soma = numero01 + numero02;
	sub = numero01 - numero02;
	mul = numero01 * numero02;
	div = (double)numero01 / (double)numero02;
	mod = numero01 % numero02;

	std::cout << "A soma dos valores � = " << soma << 
		"\n" << "A subtra��o dos valores � = " << sub <<
		"\n" << "A multiplica��o dos valores � = " << mul <<
		"\n" << "A divis�o dos valores � = " << div << 
		"\n" << "O resto da divis�o dos valores � = " << mod <<
		"\n";

	system("PAUSE");
}
