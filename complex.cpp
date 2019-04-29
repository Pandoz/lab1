#include <iostream>
#include "Complex.h"

bool check(double x, double y)//Проверка
{
	if (x > 1000 || x < -1000 || y > 1000 || y < -1000)
	{
		cout << "Вы ввели неверное число, попробуйте еще раз\n";
		return 1;
	}
	return 0;
}

void pluss(Complex N1, Complex N2)//Операция сложения
{
	Complex qwert;
	qwert.re = x.re + y.re;
	qwert.im = x.im + y.im;
	cout << qwert.re << " + (" << qwert.im << ")i\n";
}

void substruct(Complex N1, Complex N2)//Операция вычетания
{
	Complex qwert;
	qwert.re = x.re - y.re;
	qwert.im = x.im - y.im;
	cout << qwert.re << " + (" << qwert.im << ")i\n";
}

void multiplication(Complex N1, Complex N2)//Операция умножения
{
	Complex qwert;
	qwert.re = x.re * y.re - x.im * y.im;
	qwert.im = x.re * y.im + x.im * y.re;
	cout << qwert.re << " + (" << qwert.im << ")i\n";
}

void devide(Complex N1, Complex N2)//Операция деления
{
	Complex qwert;
	qwert.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	qwert.im = (x.im * y.re - x.re * y.im) / (y.re * y.re + y.im * y.im);
	cout << qwert.re << " + (" << qwert.im << ")i\n";
}
