#pragma once

#include <iostream>
#include <random>
#include <ctime>

int* generateMassive(int n);
void reverseMassive(int*, int n);
void notUpMassive(int*, int n);
void notDownMassive(int* , int n);
int sumMassive(int*, int n);
void printMassive(int* , int n);

void (*TEMP_FOO(int f))(int* a, int size);
