#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> num;
	int esc, esc1;

	cout << "Quantidade de notas: ";
	cin >> esc;

	for (int i = 0; i < esc; i++) {
	
		cout << i+1 << "° Escolha: ";
		cin >> esc1;

		num.push_back(esc1);
	}

	for (auto numero : num) {
	
		cout << numero << endl;
	}
}
