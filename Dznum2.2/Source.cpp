#include "Header.h"

int* generateMassive(int n) {
	srand(time(0));
	int *mas = new int[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
	}
	return mas;
}


void reverseMassive(int* mas, int n) {
	int* buf = new int[n];
	for (int i = 0, j = n - 1; i < n; i++, j--) {
		buf[i] = mas[j];
	}
	for (int i = 0, j = n - 1; i < n; i++, j--) {
		mas[i] = buf[i];
	}
}

void notUpMassive(int* mas, int n) {
	int buf;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++) {
			if (mas[j] < mas[j + 1]) {
				buf = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = buf;
			}
		}
}

void notDownMassive(int* mas, int n) {
	int buf;
	for (int i = 0; i < n-1; i++)
		for (int j = 0; j < n-i-1; j++) {
			if (mas[j] > mas[j + 1]) {
				buf = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = buf;
			}
		}
}

int sumMassive(int* mas, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i];
	}
	return sum;
}

void printMassive(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << '\n';
}

void (*TEMP_FOO(int f))(int* a, int size) {
	if (f == 1) {
		return notDownMassive;
	}
	if (f == 2) {
		return  notUpMassive;
	}
	if (f == 3) {
		return reverseMassive;
	}
}