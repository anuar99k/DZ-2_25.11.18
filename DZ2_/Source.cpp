#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "");

	printf("Задание 1\n");

	float x1, y1, k1;
	x1 = 12.3;
	y1 = 5.6;
	k1 = (x1 - y1) / 1 + x1 * y1;
	printf("Result is: %f\n", k1);

	printf("Задание 2\n");

	int X, Y, Z, x2, y2, z2, sum;

	printf("Введите количество карандашей: ");
	scanf_s("%d", &X);

	printf("Введите количество ручек: ");
	scanf_s("%d", &Y);

	printf("Введите количество фломастеров: ");
	scanf_s("%d", &Z);

	x2 = 3;
	y2 = x2 + 2;
	z2 = y2 + 7;
	sum = x2 + y2 + z2;
	printf("Общая стоимость: %d\n", sum);

	printf("Задание 3\n");

	int A, B;

	printf("Введите значение числа А: ");
	scanf_s("%d", &A);

	printf("Введите значение числа B: ");
	scanf_s("%d", &B);

	printf("Сумма чисел А и B: %d\n", A + B);

	printf("Задание 4\n");

	int a1, b1, sum1, razn1, proizv1, chastnoe1;

	printf("Введите два ненулевых числа\n");
	printf("Введите первое число: ");
	scanf_s("%d", &a1);
	printf("Введите второе число: ");
	scanf_s("%d", &b1);
	if (a1 != 0 and b1 != 0) {
		sum1 = pow(a1, 2) + pow(b1, 2);
		razn1 = pow(a1, 2) - pow(b1, 2);
		proizv1 = pow(a1, 2) * pow(b1, 2);
		chastnoe1 = pow(a1, 2) / pow(b1, 2);
		printf("Сумма их квадратов = %d\n", sum1);
		printf("Разность их квадратов = %d\n", razn1);
		printf("Произведение их квадратов = %d\n", proizv1);
		printf("Частное их квадратов = %d\n", chastnoe1);
	}
	else {
		printf("Введите ненулевое число!\n");
	}

	printf("Задание 4\n");

	int a2, b2, sum2, razn2, proizv2, chastnoe2;

	printf("Введите два ненулевых числа\n");
	printf("Введите первое число: ");
	scanf_s("%d", &a2);
	printf("Введите второе число: ");
	scanf_s("%d", &b2);
	if (a2 != 0 and b2 != 0) {
		sum2 = a2 + b2;
		razn2 = a2 - b2;
		proizv2 = a2 * b2;
		chastnoe2 = a2 / b2;
		printf("Сумма их квадратов = %d\n", sum2);
		printf("Разность их квадратов = %d\n", razn2);
		printf("Произведение их квадратов = %d\n", proizv2);
		printf("Частное их квадратов = %d\n", chastnoe2);
	}
	else {
		printf("Введите ненулевое число!\n");
	}

	system("pause");
}