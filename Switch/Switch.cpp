#include<iostream>
#include<string>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num1;
	int num2;
	char esc;

	std::cout << "Dígite um número: ";
	std::cin >> num1;

	std::cout << "Dígite outro valor: ";
	std::cin >> num2;

	std::cout << "\nEscolha uma operação para fazer: \n\n+ Soma \n- Subtração \n* Multiplicação \n/ Divisão" << std::endl;
	std::cout << "\n: ";
	std::cin >> esc;

	switch (esc){
	case '+': std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		break;

	case '-': std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		break;

	case '*': std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		break;

	case '/': std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
		break;

	default: std::cout << "Escolha feita é invalida, tente novamente" << std::endl;
		break;
	}

	system("PAUSE");
	return 0;
}
