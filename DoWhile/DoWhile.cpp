#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese");

	int esc;

	do {
		std::cout << "\n*** Menu de Ticket de Cinema ***\n";

		std::cout << "\n1 - Entrada Inteira\n";
		std::cout << "\n2 - Meia Entrada\n";
		std::cout << "\n3 - Sair do Menu\n";

		std::cout << "\nEscolha uma opção: ";
		std::cin >> esc;

		switch (esc) {
			case 1: std::cout << "\nEntrada inteira Comprada\n\n";
				break;
			case 2: std::cout << "\nMeia entrada comprada\n\n";
				break;
			case 3: std::cout << "\nSaindo do menu...\n\n";
				break;

			default: std::cout << "\nEscolha invalida, tente novamente\n";
				break;
		}

	} while (esc != 3);

	system("PAUSE");
	return 0;
}
