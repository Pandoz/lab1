#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
int main()
{
	chislo N1{ }; 
	chislo N2{ };
	char oper{ };
	
	cout << "Введите первое комплексное число: ";
	cin >> x.re >> x.im; //вводим оба значения первого числа
	cout << "Введите второе комплексное число: ";
	cin >> y.re >> y.im; //вводим оба значения второго числа
	}
	chislo N1 = { x.re, x.im }; //первое комплексное число
	chislo N2 = { y.re, y.im }; //второе
	
	cout << "Введите символ операции над числами: ";
	cin >> oper; //выбираем операци.

	}
	switch (oper)
	{
	case '+':
		plus(N1, N2);
		break; //выполняем функцию сложения
	case '-':
		minus(N1, N2);
		break; //выполняем функцию вычитания
	case '*':
		ymnoz(N1, N2);
		break; //выполняем функцию умножения
	case '/':
		delen(N1, N2);
		break; //выполняем функцию деления

	default:
		cout << "Данной операции не существует\n Вычисления не возможны"; //иначе вывод
	}

	ifstream file;
	file.open("complex.txt"); //открываем файл
	{
		int f, max = -1;
		int maxIndex;
		file >> f; //считываемм значения с файла комлекс.тхт
		int n;

		Complex *p = new Complex[n]; 
		for (int i = 0; i < n; i++) //считываем количество комплексных чисел в переменную n //первое число в файле - кол-во  //а дальше числа которые идут в сам массив
		{ //а сами числа в массив
			file >> f;
			p[i].re = f; //первая часть числа      
			file >> f;                    
			p[i].im = f; //вторая часть числа
			cout << i + 1 << " число: " << p[i].re << " + (" << p[i].im << ")i\n"; //само число

			if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > max)
			{
				max = sqrt(p[i].re * p[i].re + p[i].im * p[i].im); //ищем комплексное число с макс. модулем в массиве p
				maxIndex = i;
			}
		}
		cout << "Комплексное число с максимальным модулем: " << p[maxIndex].re << " + (" << p[maxIndex].im << ")i\n";
	} //выводим максимальное число с модулем
	file.close();
	return 0; 

