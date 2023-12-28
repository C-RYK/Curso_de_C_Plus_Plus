#include <iostream>
#include <string>
#include "Matematica.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	float num1, num2;
	int esc;

	cout << "Dígite um número: ";
	cin >> num1;

	cout << "Dígite outro número: ";
	cin >> num2;

	cout << "\n1 - SOMA \n2 - SUBTRAÇÃO \n3 - DIVISÃO \n4 - MULTIPLICAÇÃO \n5 - POTENCIAÇAO \n6 - RAIZ QUADRADA \n";

	cout << "\nEscolha um número para realizar uma operação:";
	cin >> esc;

	cal(num1, num2, esc);
		
	system("PAUSE");
	return 0;
}
