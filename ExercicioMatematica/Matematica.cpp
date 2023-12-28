#include <iostream>
#include <string>
#include <locale.h>
#include <math.h>
#include "Matematica.h"

using namespace std;

string cal(float num1, float num2, int esc) {

	float som, sub, div, mul, rai1, rai2;
	string v1, v2, v3, v4, v5, v6, v7;

	if (esc == 1) {
		som = num1 + num2;
		v1 = printf("\n%.0f + %.0f = %.0f \n\n", num1, num2, som);
		return v1;
	}
	else if (esc == 2) {
		sub = num1 - num2;
		v2 = printf("\n%.0f - %.0f = %.0f \n\n", num1, num2, sub);
		return v2;
	}
	else if (esc == 3) {
		div = num1 / num2;
		v3 = printf("\n%.0f : %.0f = %.1f \n\n", num1, num2, div);
		return v3;
	}
	else if (esc == 4) {
		mul = num1 * num2;
		v4 = printf("\n%.0f . %.0f = %.0f \n\n", num1, num2, mul);
		return v4;
	}
	else if (esc == 5) {
		v5 = printf("\n%.0f ^ %.0f = %.1f \n\n", num1, num2, pow(double(num1), double(num2)));
		return v5;
	}
	else if (esc == 6) {
		rai1 = sqrt(num1);
		rai2 = sqrt(num2);
		v6 = printf("\nRaiz quadrada de %.1f é %.1f \n", num1, rai1);
		v7 = printf("Raiz quadrada de %.1f é %.1f \n\n", num2, rai2);
		return v6;
		return v7;
	}
}
