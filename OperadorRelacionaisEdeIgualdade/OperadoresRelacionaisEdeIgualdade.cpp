#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese");

	int numero1, numero2;
	bool comparacao;

	std::cout << "D�gite o primeiro n�mero: ";
	std::cin >> numero1;
	std::cout << "Primeiro valor = " << numero1 << "\n";

	std::cout << "D�gite o segundo n�mero: ";
	std::cin >> numero2;
	std::cout << "Segundo valor = " << numero2 << "\n";

	// = � um operador de atribui��o. N�o confundir com ==.
	// == � operador de igualdade.

	comparacao = (numero1 == numero2);
	std::cout << "O n�mero1 � igual ao n�mero2: " << comparacao << std::endl;
	
	comparacao = (numero1 > numero2);
	std::cout << "O n�mero1 � maior ao n�mero2: " << comparacao << std::endl;

	comparacao = (numero1 < numero2);
	std::cout << "O n�mero1 � menor ao n�mero2: " << comparacao << std::endl;

	comparacao = (numero1 >= numero2);
	std::cout << "O n�mero1 � maior ou igual ao n�mero2: " << comparacao << std::endl;

	comparacao = (numero1 <= numero2);
	std::cout << "O n�mero1 � menor ou igual ao n�mero2: " << comparacao << std::endl;

	comparacao = (numero1 != numero2);
	std::cout << "O n�mero1 � diferente ao n�mero2: " << comparacao << std::endl;

	return 0;

	system("PAUSE");
}
