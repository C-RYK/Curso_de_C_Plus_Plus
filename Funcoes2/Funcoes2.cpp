#include<iostream>
#include<locale.h>

// Prototipos de Funções: Funções criadas sem corpo, e escritas depois fora do metodo main

int soma(int num1, int num2);

int main() {

	setlocale(LC_ALL, "Portuguese");

	int num1, num2;

	std::cout << "Dígite um número: ";
	std::cin >> num1;

	std::cout << "Dígite um número para somar com o primeiro: ";
	std::cin >> num2;;

	std::cout << "A soma dos valores dígitados é " << soma(num1, num2) << std::endl;

	system("PAUSE");
	return 0;
}

int soma(int num1, int num2) {

	return num1 + num2;
}
