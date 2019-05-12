#include <iostream>
#include "Complex.h"

//файл с реализациями функций
void pluss(Complex N1, Complex N2)//Операция сложения между двумя структурами
{
	Complex a; //cоздаем новую струкртуру, в которой производим все вычисления и выводим результат
	a.re = x.re + y.re; //первую часть числа
	a.im = x.im + y.im; //вторую часть числа
	cout << a.re << " + (" << a.im << ")i\n"; //вывод результата
}

void substruct(Complex N1, Complex N2)//Операция вычетания
{
	Complex a;
	a.re = x.re - y.re;
	a.im = x.im - y.im;
	cout << a.re << " + (" << a.im << ")i\n";
}

void multiplication(Complex N1, Complex N2)//Операция умножения
{
	Complex qwert;
	a.re = x.re * y.re - x.im * y.im;
	a.im = x.re * y.im + x.im * y.re;
	cout << a.re << " + (" << a.im << ")i\n";
}

void devide(Complex N1, Complex N2)//Операция деления
{
	Complex a;
	a.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	a.im = (x.im * y.re - x.re * y.im) / (y.re * y.re + y.im * y.im);
	cout << a.re << " + (" << a.im << ")i\n";
}
