#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
int main()
{
	system("chcp 1251");
	Complex N1{ };
	Complex N2{ };
	char oper{ };
	
	cout << "Числа должны принимать значения данного диапазона[-1000; 1000]\n";
	cout << "Введите первое комплексное число: ";
	cin >> x.re >> x.im;
	cout << "Введите второе комплексное число: ";
	cin >> y.re >> y.im;
	}
	Complex N1 = { x.re, x.im }
	Complex N2 = { y.re, y.im };
	
	cout << "Введите символ операции над числами: ";
	cin >> oper;

	}
	switch (oper)
	{
	case '+':
		pluss(N1, N2);	
		cout << "Сумма: " << addiction.re << " + (" << addiction.im << ")i\n";
		break;
	case '-':
		substruct(N1, N2);
		cout << "Разность: " << subtraction.re << " + (" << subtraction.im << ")i\n";
		break;
	case '*':
		multiplication(N1, N2);
		cout << "Произведение: " << multiplication.re << " + (" << multiplication.im << ")i\n";
		break;
	case '/':
		devide(N1, N2);
		cout << "Частное: " << division.re << " + (" << division.im << ")i\n";
		break;

	default:
		cout << "Данной операции не существует\n Вычисления не возможны";
	}
	cout << "Чтение комплексных чисел из файла complex.txt...\n";
	ifstream file;
	file.open("complex.txt");
	{
		int f, max = -1;
		int maxIndex;
		file >> f;
		int n;

		Complex *p = new Complex[n];
		for (int i = 0; i < n; i++)
		{
			file >> f;
			p[i].re = f;
			file >> f;
			p[i].im = f;
			cout << i + 1 << " число: " << p[i].re << " + (" << p[i].im << ")i\n";

			if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > max)
			{
				max = sqrt(p[i].re * p[i].re + p[i].im * p[i].im);
				maxIndex = i;
			}
		}
		cout << "Комплексное число с максимальным модулем: " << p[maxIndex].re << " + (" << p[maxIndex].im << ")i\n";
		cout << "Модуль равен: " << max << '\n';
	}
	file.close();
	return 0;
