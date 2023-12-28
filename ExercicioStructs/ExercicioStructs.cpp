#include <iostream>
#include <locale.h>
#include <string>

struct ponto3D
{	

	int x, y, z;

	void DesenharCordenadas3D(ponto3D ponto) {

		std::cout << "X: " << x << " Y: " << y << " Z: " << z << std::endl;
	}
};

int main() {

	ponto3D cordenadas;

	cordenadas.x = 55;
	cordenadas.y = 105;
	cordenadas.z = 250;

	cordenadas.DesenharCordenadas3D(cordenadas);

	system("PAUSE");
	return 0;

}
