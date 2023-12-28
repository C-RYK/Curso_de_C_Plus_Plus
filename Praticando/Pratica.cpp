#include<iostream>
#include<locale.h>
#include<cstdlib>
#include<stdio.h>

void matrix() {

	srand((unsigned)time(0));

	system("color 2");

	int sort;
	for (int num = 0; num < 1; --num) {
		sort = (rand() % 2);

		std::cout << sort << " ";
	}
}

int main() {

	setlocale(LC_ALL, "Portuguese");

	matrix();

	return 0;
}
