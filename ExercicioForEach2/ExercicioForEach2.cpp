#include <iostream>
#include <vector>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	string nome;
	vector<double> notas {4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0};
	double soma { 0.0 }, tam;

	tam = size(notas);

	cout << "Nome do aluno: ";
	cin >> nome;

	for (auto nota : notas) {
		soma += nota;
	}

	cout << "O aluno " << nome << " Teve média de: " << (soma / tam) << endl;

	system("PAUSE");
	return 0;
}
