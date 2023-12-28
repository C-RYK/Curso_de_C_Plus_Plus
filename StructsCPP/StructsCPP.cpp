#include <iostream>
#include <locale.h>
#include <string>

class data
{
public:
	int dia;
	int mes;
	int ano;
};

int main() {

	data agenda;

	agenda.dia = 01;
	agenda.mes = 05;
	agenda.ano = 1997;

	std::cout << agenda.dia << " / " << agenda.mes << " / " << agenda.ano << std::endl;

	system("PAUSE");
	return 0;

}
