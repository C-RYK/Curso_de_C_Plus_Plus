#include <iostream>
#include <string>
#include <locale.h>
#include <array>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int esc, tam, n;
	double num[20]{0.0}, maior{ 0 }, menor{ 0 };

	cout << "Quantos números vc quer dígitar ?: ";
	cin >> esc;

	cout << "" << endl;
	for (int i = 0; i < esc; i++) {

		cout << i + 1 << "° número: ";
		cin >> n;
		
		num[i] = n;
	}

	maior = num[0];
	menor = num[0];

	cout << "" << endl;
	for (int i = 0; i < esc; i++) {

		if (num[i] > maior) {
			maior = num[i];
		}

		else if (num[i] < menor) {
			menor = num[i];
		}
	}

	cout << "O maior número dígitado foi: " << maior << endl;
	cout << "" << endl;
	cout << "O menor número dígitado foi: " << menor << endl;

	system("PAUSE");
	return 0;
}
