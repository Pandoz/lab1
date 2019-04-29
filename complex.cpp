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

Complex addComplex(const Complex &x, const Complex &y)
{
	Complex qwert;
	qwert.re = x.re + y.re;
	qwert.im = x.im + y.im;
	return qwert;
}

Complex subtractComplex(const Complex &x, const Complex &y)
{
	Complex qwert;
	qwert.re = x.re - y.re;
	qwert.im = x.im - y.im;
	return qwert;
}

Complex multiplyComplex(const Complex &x, const Complex &y)
{
	Complex qwert;
	qwert.re = x.re * y.re - x.im * y.im;
	qwert.im = x.re * y.im + x.im * y.re;
	return qwert;
}

Complex divideComplex(const Complex &x, const Complex &y)
{
	Complex qwert;
	answer.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	qwert.im = (x.im * y.re - x.re * y.im) / (y.re * y.re + y.im * y.im);
	return qwert;
