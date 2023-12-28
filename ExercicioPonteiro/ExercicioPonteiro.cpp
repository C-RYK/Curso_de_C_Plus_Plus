#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int numero { 234 };

	int *ponteiro;
	ponteiro = &numero;

	int *outroPtr;
	outroPtr = ponteiro;

	*ponteiro = 1456;

	cout << *ponteiro << endl;

	cout << "Endereço de memoria de número: " << ponteiro << endl;
	cout << "Endereço de memoria de ponteiro: " << &ponteiro << endl;
	cout << "Endereço de memoria de outroPtr: " << outroPtr << endl;
	cout << "Valor da variavel referenciada pelo número de memoria dentro de outroPtr: " << *outroPtr << endl;

	*ponteiro = *outroPtr + 200;

	std::cout << "Novo valor da variavel número representada pelo endereço de memoria dentro de outroPtr: " << *outroPtr << endl;

	system("PAUSE");
	return 0;
}
