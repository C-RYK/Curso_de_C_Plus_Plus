#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	string nome;
	double notas[5];
	int tam;
	double nota, media{ 0 }, soma{0};

	cout << "Dígite o nome do aluno: ";
	cin >> nome;
	cout << "" << endl;
	
	for (int i = 0; i < 5; i++) {

		cout << "Dígite a " << i + 1 << "° nota do aluno: ";
		cin >> nota;

		notas[i] = nota;

		system("CLS");
	}
	
	tam = sizeof(notas) / sizeof(notas[0]);
	cout << "" << endl;

	for (int i = 0; i < tam; i++) {
		
		cout << i + 1 << "° nota do aluno: " << notas[i] << endl;

		soma += notas[i];
	}

	media = soma / 5;

	cout << "\nA média do aluno " << nome << " foi: " << media << endl;

	system("PAUSE");
	return 0;
}
