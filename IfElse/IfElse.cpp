#include <iostream>
#include <string>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;

	std::string senhaDeAcesso = "cmaismais";
	std::string senhaDigitada;

	std::cout << "D�gite a senha de acesso: ";
	std::cin >> senhaDigitada;

	if (senhaDigitada == senhaDeAcesso) {
		std::cout << "\nAcesso Permitido" << std::endl;
		bAcesso = true;
	}
	else {
		std::cout << "\nAcesso Negado" << std::endl;
		system("PAUSE");
		exit(0);
	}
	bFezSol = bCarroPronto = bSalarioDepositado = true;

	if (bAcesso) {
		if (bFezSol || bCarroPronto || bSalarioDepositado) {
			std::cout << "Vai dar praia!!!" << std::endl;
			system("PAUSE");
		}
		else if (!bSalarioDepositado){
			std::cout << "N�o vai dar praia, o sal�rio tamb�m n�o foi depositado" << std::endl;
			system("PAUSE");
		}
	}
	return(0);
}
