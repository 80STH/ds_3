#include<stdio.h>
#include<conio.h>
#include<locale>
void main()
{
	setlocale(LC_ALL, "RUS");
	float X, Y;
	printf_s("������� X � Y:");
	scanf_s("%f%f", &X, &Y);
	if ((X >= 0) && (Y >= 0)) printf_s("����� ����� � ������ ��������");
	if ((X <= 0) && (Y >= 0)) printf_s("����� ����� �� ������ ��������");
	if ((X <= 0) && (Y <= 0)) printf_s("����� ����� � ������� ��������");
	if ((X >= 0) && (Y <= 0)) printf_s("����� ����� � ��������� ��������");
	_getche();
}