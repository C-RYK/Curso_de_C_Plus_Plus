#include<iostream>
#include<locale.h>

int soma(int Num1, int Num2) {

	return Num1 + Num2;
}

void mensagem() {

	std::cout << "Ol�, Mundo !!" << "\n";
}

int main() {

	setlocale(LC_ALL, "Portuguese");

	int Num1, Num2, retorno;

	mensagem();
	std::cout << std::endl;

	std::cout << "D�gite um n�mero para ser somado: ";
	std::cin >> Num1;

	std::cout << "D�gite outro n�mero: ";
	std::cin >> Num2;

	std::cout << "A soma de " << Num1 << " + " << Num2 << " � igual a " << soma(Num1, Num2) << std::endl;

	retorno = soma(Num1, soma(5, 25));
	std::cout << "\n";

	std::cout << "Retorno: " << retorno << "\n";

	system("PAUSE");
	return 0;
}
