#include <iostream>
#include <vector>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	vector<double> velocidades{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7};
	double soma{ 0.0f }, media;
	double tam;

	tam = size(velocidades);

	for (auto velocidade : velocidades) {
	
		soma = soma + velocidade;
	}
	
	media = soma / tam;

	printf("A média de velocidade da estrada é de: %.1f Km/h\n\n", media);

	system("PAUSE");
	return 0;
}
