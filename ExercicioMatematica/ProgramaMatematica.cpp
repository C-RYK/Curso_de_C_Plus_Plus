#include <iostream>
#include <string>
#include "Matematica.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	float num1, num2;
	int esc;

	cout << "D�gite um n�mero: ";
	cin >> num1;

	cout << "D�gite outro n�mero: ";
	cin >> num2;

	cout << "\n1 - SOMA \n2 - SUBTRA��O \n3 - DIVIS�O \n4 - MULTIPLICA��O \n5 - POTENCIA�AO \n6 - RAIZ QUADRADA \n";

	cout << "\nEscolha um n�mero para realizar uma opera��o:";
	cin >> esc;

	cal(num1, num2, esc);
		
	system("PAUSE");
	return 0;
}
