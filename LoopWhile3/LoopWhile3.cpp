#include <iostream>

int main()
{
	int num = 0;

	while (num <= 50) {

		if (num % 2 == 1) {
			std::cout << num << " ";
		}

		num = num + 1;
	}
	system("PAUSE");
	return 0;
}
