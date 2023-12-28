#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese");

	int numero1, numero2;
	bool comparacao;

	std::cout << "Dígite o primeiro número: ";
	std::cin >> numero1;
	std::cout << "Primeiro valor = " << numero1 << "\n";

	std::cout << "Dígite o segundo número: ";
	std::cin >> numero2;
	std::cout << "Segundo valor = " << numero2 << "\n";

	// = é um operador de atribuição. Não confundir com ==.
	// == é operador de igualdade.

	comparacao = (numero1 == numero2);
	std::cout << "O número1 é igual ao número2: " << comparacao << std::endl;
	
	comparacao = (numero1 > numero2);
	std::cout << "O número1 é maior ao número2: " << comparacao << std::endl;

	comparacao = (numero1 < numero2);
	std::cout << "O número1 é menor ao número2: " << comparacao << std::endl;

	comparacao = (numero1 >= numero2);
	std::cout << "O número1 é maior ou igual ao número2: " << comparacao << std::endl;

	comparacao = (numero1 <= numero2);
	std::cout << "O número1 é menor ou igual ao número2: " << comparacao << std::endl;

	comparacao = (numero1 != numero2);
	std::cout << "O número1 é diferente ao número2: " << comparacao << std::endl;

	return 0;

	system("PAUSE");
}
