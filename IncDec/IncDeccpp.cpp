#include<iostream>

int main() 
{
	int num1{ 10 }, num2{ 20 }, Resultado;
	num1 = num2++;

	num2 = ++num1;

	std::cout << "Valor Atual de Num1: " << num1 << " e " <<
		"Num2: " << num2 << "\n";

	num1 = num2++;
	std::cout << "Valor Atual de Num1: " << num1 << " e " <<
		"Num2: " << num2 << "\n";

	num2 = ++num1;
	std::cout << "Valor Atual de Num1: " << num1 << " e " <<
		"Num2: " << num2 << "\n";

	system("PAUSE");

	return 0;
}
