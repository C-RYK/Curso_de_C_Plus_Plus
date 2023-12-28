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

	cout << "Endere�o de memoria de n�mero: " << ponteiro << endl;
	cout << "Endere�o de memoria de ponteiro: " << &ponteiro << endl;
	cout << "Endere�o de memoria de outroPtr: " << outroPtr << endl;
	cout << "Valor da variavel referenciada pelo n�mero de memoria dentro de outroPtr: " << *outroPtr << endl;

	*ponteiro = *outroPtr + 200;

	std::cout << "Novo valor da variavel n�mero representada pelo endere�o de memoria dentro de outroPtr: " << *outroPtr << endl;

	system("PAUSE");
	return 0;
}
