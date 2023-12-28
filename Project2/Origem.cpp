#include <iostream>
#include <vector>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	vector<string> nomes{ "Carlos", "Ana", "João"};

	for (auto nome : nomes) {
	
		cout << nome << endl;
		cout << " " << endl;
	}
}