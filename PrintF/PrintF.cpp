#include<iostream>
#include<tchar.h>
#include<string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int numInt{ 12 };
	float numFlo{ 36.56 };
	char Caractere{ 'c' };
	std::string Texto{ "Vou aprender C++ e descobrir o lado Sombrio da for�a" };
	std::printf("Valor inteiro: %d - Valor Float: %.2f - Valor Caractere: %c - Valor String: %s", numInt, numFlo, Caractere, Texto.c_str());

	std::cout << "O texto da String �: " + Texto << "\n";

	std::printf("O valor do Caractere d�gitado: %c na Tabela ASCII �: %d \n", Caractere, Caractere);

	system("PAUSE");
	return 0;
}
