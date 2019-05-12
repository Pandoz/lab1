#ifndef Complex_h
#define Complex_h

struct Complex //объявляем структуру с переменными двойной точности
{
	double re;
	double im;
} // объявление функций
void pluss(Complex N1, Complex N2); //сложение
void substruct(Complex N1, Complex N2); //вычитание
void multiplication(Complex N1, Complex N2); //умножение
void devide(Complex N1, Complex N2); //деление

#endif
