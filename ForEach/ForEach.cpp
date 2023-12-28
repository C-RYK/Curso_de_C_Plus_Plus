#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int anos[]{ 1998, 2011, 2014, 2017, 2020 };

	for (auto ano : anos) {
		
		cout << ano << endl;
		cout << "\n";
	}
}
