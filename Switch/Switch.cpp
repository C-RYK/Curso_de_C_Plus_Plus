#include<iostream>
#include<string>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num1;
	int num2;
	char esc;

	std::cout << "D�gite um n�mero: ";
	std::cin >> num1;

	std::cout << "D�gite outro valor: ";
	std::cin >> num2;

	std::cout << "\nEscolha uma opera��o para fazer: \n\n+ Soma \n- Subtra��o \n* Multiplica��o \n/ Divis�o" << std::endl;
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

	default: std::cout << "Escolha feita � invalida, tente novamente" << std::endl;
		break;
	}

	system("PAUSE");
	return 0;
}
