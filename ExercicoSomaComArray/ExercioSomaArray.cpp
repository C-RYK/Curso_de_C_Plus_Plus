#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	double num[10], soma{0};
	int esc, tam;

	tam = sizeof(num) / sizeof(num[10]);

	for (int i = 0; i < tam; i++) {
	
		cout << "D�gite o " << i + 1 << "� n�mero: ";
		cin >> esc;

		num[i] = esc;

		soma = soma + num[i];

		system("CLS");
	}

	cout << "Os n�meros escolhidos foram: ";
	for (int i = 0; i < tam; i++) {
		
		if (i < tam - 1) {
			cout << num[i] << ", ";
		}

		else {
			cout << num[i] << "\n";
		}
	}

	cout << " " << endl;
	cout << "A soma de todos os n�meros deu : " << soma << endl;
	cout << " " << endl;

	system("PAUSE");
	return 0;
}
