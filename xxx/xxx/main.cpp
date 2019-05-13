#include <iostream>
#include <fstream>
#include "complex.h"

using namespace std;

int main()
{
	char oper;
	double x1, x2, y1, y2;

	cout << "Введите первое комплексное число: ";
	cin >> x1;
	cin >> y1; //вводим оба значения первого числа

	cout << "Введите второе комплексное число: ";
	cin >> x2;
	cin >> y2;//вводим оба значения второго числа

	chislo N1 = { x1, y1 }; //первое комплексное число
	chislo N2 = { x2, y2 }; //второе

	cout << "Введите символ операции над числами: ";
	cin >> oper; //выбираем операци.

	switch (oper)
	{
	case '+':
		pl(N1, N2);
		break; //выполняем функцию сложения
	case '-':
		min(N1, N2);
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
		int f, max;
		int maxIndex;
		file >> f; //считываемм значения с файла комлекс.тхт
		int р, n;

		chislo* p = new chislo[n];
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