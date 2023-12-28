#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

string cal(float num1, float num2);

int main() {
	setlocale(LC_ALL, "Portuguese");

	float num1, num2;

	cout << "Dígite o primeiro número: ";
	cin >> num1;

	cout << "Dígite o segundo número: ";
	cin >> num2;

	cal(num1, num2);

	system("PAUSE");
	return 0;
}

string cal(float num1, float num2)
{

	string var1, var2, var3, var4;
	float soma, sub, div, mul;

	soma = num1 + num2;
	sub = num1 - num2;
	div = num1 / num2;
	mul = num1 * num2;


	var1 = printf("Soma: %.0f + %.0f = %.0f \n", num1, num2, soma);
	var2 = printf("Subtração: %.0f - %.0f = %.0f \n", num1, num2, sub);
	var3 = printf("Divisão: %.0f : %.0f = %.2f \n", num1, num2, div);
	var4 = printf("Multiplicação: %.0f . %.0f = %.0f \n", num1, num2, mul);

	return var1;
	return var2;
	return var3;
	return var4;
}
