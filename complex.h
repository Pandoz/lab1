#ifndef Complex_h
#define Complex_h

struct chislo //объявляем структуру с переменными двойной точности
{
	double re; //первое значение числа
	double im; // второе значение числа
} // объявление функций
void plus(chislo N1, chislo N2); //сложение
void minus(chislo N1,chislo N2); //вычитание
void ymnoz(chislo N1, chislo N2); //умножение
void delen(chislo N1, chislo N2); //деление

#endif
