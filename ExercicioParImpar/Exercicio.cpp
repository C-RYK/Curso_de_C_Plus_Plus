#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

string ParImpar(int num) {

	if (num % 2 == 0) {
		return "O n�mero � Par";
	}

	else
	{
		return "O n�mero � Impar";
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int esc;

	cout << "Escolha um n�mero: ";
	cin >> esc;

	cout << ParImpar(esc) << endl;

	system("PAUSE");
	return 0;

}
