#include <iostream>
#include <string>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int n1;
	std::cout << "D�gite um n�mero e veja se ele � par: ";
	std::cin >> n1;

	n1 % 2 == 0 ? std::cout << "Este n�mero � par\n" : std::cout << "Este n�mero � impar\n";

	system("PAUSE");
	return 0;
}
