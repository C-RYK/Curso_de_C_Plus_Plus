#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

string ParImpar(int num) {

	if (num % 2 == 0) {
		return "O número é Par";
	}

	else
	{
		return "O número é Impar";
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int esc;

	cout << "Escolha um número: ";
	cin >> esc;

	cout << ParImpar(esc) << endl;

	system("PAUSE");
	return 0;

}
