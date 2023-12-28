#include <iostream>

int main() 
{

	int num = 0;

	while (num <= 50) {

		if (num % 2 == 0) {
			std::cout << num << " ";
		}
		num += 1;
	}

	system("PAUSE");
	return 0;
}