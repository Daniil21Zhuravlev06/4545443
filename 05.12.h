#pragma once

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void fill_random(int** mas, const int n, const int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}
void print_matrix(int** mas, const int n, const int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}
//Напишите функцию, которая вычисляет кол-во положительных элементов в матрице
int count_pos(int** mas, const int n, const int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j > 0]) k++;
		}
	}
	return k;
}
int count_chot(int** mas, const int n, const int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j]) %2 == 0 ) k++;
		}
	}
	return k;
}
//Умножить матрицу на число
void mul_by_number(int** mas, int n, int m, int number) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= number;
		}
	}
}
//Среднее арифметическое элементовна главной диагонали
double amean(int** mas, int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i][i];
	}
	return static_cast<double>(sum) / n;
}
// 1 2 3 4 5
// 5 4 3 2 1
void reversi_row(int** mas, int n, int m) {
	int s = m
	for (int j = 0; j; j++) {
		swap(mas[k][j], mas[k][m - 1 - j]);
	}
}