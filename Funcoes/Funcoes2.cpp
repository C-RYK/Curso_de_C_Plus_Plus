#include<iostream>
#include<locale.h>

// Prototipos de Fun��es: Fun��es criadas s�o corpo, e iniciadas dentro do metodo Main.
int soma(int num1, int num2);

int main() {

	setlocale(LC_ALL, "Portuguese");

	int num1, num2;

	std::cout << "D�gite um n�mero: " << std::endl;
	std::cin >> num1;

	std::cout << "D�gite um n�mero para somar com o primeiro: " << "\n";
	std::cin >> num2;;

	std::cout << "A soma dos valores d�gitados � " << soma(num1, num2) << std::endl;

	system("PAUSE");
	return 0;
}
