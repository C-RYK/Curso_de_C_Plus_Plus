#include <iostream>
#include <locale.h>
#include <string>

struct CadLivros
{
	int id, ano;
	std::string titulo;
	std::string autor;
	std::string editora;

	void livrosCadastrados(CadLivros livros) {

		std::cout << "Título: " << titulo << std::endl;
		std::cout << "Autor: " << autor << std::endl;
		std::cout << "Editora: " << editora << std::endl;
		std::cout << "Ano: " << ano << std::endl;
		std::cout << "ID: " << id << std::endl;
	}
};

int main() {

	setlocale(LC_ALL, "Portuguese");

	CadLivros livro;

	livro.titulo = "Maus";
	livro.autor = "Art Spiegelman";
	livro.editora = "Companhia das letras";
	livro.ano = 1986;
	livro.id = 5455220;

	livro.livrosCadastrados(livro);

	system("PAUSE");
	return 0;
}
