#include <iostream>
#include <string>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int n1;
	std::cout << "Dígite um número e veja se ele é par: ";
	std::cin >> n1;

	n1 % 2 == 0 ? std::cout << "Este número é par\n" : std::cout << "Este número é impar\n";

	system("PAUSE");
	return 0;
}
