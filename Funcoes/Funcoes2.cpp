#include<iostream>
#include<locale.h>

// Prototipos de Funções: Funções criadas são corpo, e iniciadas dentro do metodo Main.
int soma(int num1, int num2);

int main() {

	setlocale(LC_ALL, "Portuguese");

	int num1, num2;

	std::cout << "Dígite um número: " << std::endl;
	std::cin >> num1;

	std::cout << "Dígite um número para somar com o primeiro: " << "\n";
	std::cin >> num2;;

	std::cout << "A soma dos valores dígitados é " << soma(num1, num2) << std::endl;

	system("PAUSE");
	return 0;
}
