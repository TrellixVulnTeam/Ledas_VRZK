﻿// lab1(4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <locale>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>


// Задание 4
// Считаем сумму строк
int main() {


	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int **b;
	int *sum;
	int arr2;
	int arr3;



	// Устанавливаем размер матрицы
	printf_s("Введем количество строк в матрице\n:  ");
	scanf_s("%d", &arr2);
	printf_s("Введем количество столбцов в матрице\n:  ");
	scanf_s("%d", &arr3);

	// выделяем память под массив и матрицу
	sum = (int *)malloc(arr2 * sizeof(int));

	b = (int **)malloc(arr2 * sizeof(int));
	for (int i = 0; i < arr2; i++) {
		b[i] = (int*)malloc(arr3 * sizeof(int));
	}

	// Интелезируем матрицу и вычисляем сумму строк
	for (int i = 0; i < arr2; i++) {
		sum[i] = 0;
		for (int j = 0; j < arr3; j++) {
			printf_s("%4d", b[i][j] = rand() % 100);
			sum[i] += b[i][j];
		}
		printf_s("\n\n");
	}
// Выводим ответ
	for (int i = 0; i < arr2; i++) {
		printf_s("\n%d", sum[i]);
	}

	for (int i = 0; i < arr2; i++) {
		free(b[i]);
	}
	free(b);
	free(sum);
	getchar();
	return 0;
}
