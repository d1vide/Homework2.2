#include "Header.h"

int main() {
	setlocale(0, "");
	int n;
	std::cout << "Введите кол-во элементов в массиве \n";
	std::cin >> n;
	int* massive = generateMassive(n);
	printMassive(massive, n);
	int sumM = sumMassive(massive, n);
	std::cout << "Сумма элементов массива - " << sumM << std::endl;
	int f;
	if (sumM > massive[0]) {
		f = 1;
		std::cout << "Сумма массива больше первого элемента: массив отсортирован в неубывающем порядке \n";
	}
	else if (sumM < massive[0]) {
		f = 2;
		std::cout << "Сумма массива меньше первого элемента: массив отсортирован в неувозрастающем порядке \n";
	}
	else {
		f = 3;
		std::cout << "Сумма элементов массива равна первому элементу: ревёрс массива \n";
	}
	void (*TEMP2)(int* massive, int n);
	TEMP2 = TEMP_FOO(f);
	TEMP2(massive, n);
	printMassive(massive, n);
	return 0;

}