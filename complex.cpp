#include <iostream>
#include "Complex.h"

//файл с реализациями функций
void plus(chislo N1, chislo N2)//Операция сложения между двумя структурами
{
	chislo a; //cоздаем новую струкртуру, в которой производим все вычисления и выводим результат
	a.re = x.re + y.re; //первую часть числа
	a.im = x.im + y.im; //вторую часть числа
	cout << a.re << " + (" << a.im << ")i\n"; //вывод результата
}

void minus(chislo N1, chislo N2)//Операция вычетания
{
	chislo a;
	a.re = x.re - y.re;
	a.im = x.im - y.im;
	cout << a.re << " + (" << a.im << ")i\n";
}

void ymnoz(chislo N1, chislo N2)//Операция умножения
{
	chislo a;
	a.re = x.re * y.re - x.im * y.im;
	a.im = x.re * y.im + x.im * y.re;
	cout << a.re << " + (" << a.im << ")i\n";
}

void delen(chislo N1, chislo N2)//Операция деления
{
	chislo a;
	a.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	a.im = (x.im * y.re - x.re * y.im) / (y.re * y.re + y.im * y.im);
	cout << a.re << " + (" << a.im << ")i\n";
}
