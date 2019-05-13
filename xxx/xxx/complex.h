#ifndef Complex_h
#define Complex_h

bool c(double x, double y); //используем дл€ хранени€ результатов логических выражений чисел x и y
struct chislo //объ€вл€ем структуру с переменными двойной точности
{
	double re; //первое значение числа
	double im; // второе значение числа
}; // объ€вление функций
void pl(chislo N1, chislo N2); //сложение
void min(chislo N1, chislo N2); //вычитание
void ymnoz(chislo N1, chislo N2); //умножение
void delen(chislo N1, chislo N2); //деление

#endif