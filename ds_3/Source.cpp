#include<stdio.h>
#include<conio.h>
#include<locale>
void main()
{
	setlocale(LC_ALL, "RUS");
	float X, Y;
	printf_s("Введите X и Y:");
	scanf_s("%f%f", &X, &Y);
	if ((X >= 0) && (Y >= 0)) printf_s("Точка лежит в первой четверти");
	if ((X <= 0) && (Y >= 0)) printf_s("Точка лежит во второй четверти");
	if ((X <= 0) && (Y <= 0)) printf_s("Точка лежит в третьей четверти");
	if ((X >= 0) && (Y <= 0)) printf_s("Точка лежит в четвертой четверти");
	_getche();
}