#include <iostream>
#include "Complex.h"
using namespace std;

//���� � ������������ �������

void plus(chislo N1, chislo N2)//�������� �������� ����� ����� �����������
{
	chislo a; //c������ ����� ����������, � ������� ���������� ��� ���������� � ������� ���������
	a.re = x.re + y.re; //������ ����� �����
	a.im = x.im + y.im; //������ ����� �����
	cout << a.re << " + (" << a.im << ")i\n"; //����� ����������
}

void minus(chislo N1, chislo N2)//�������� ���������
{
	chislo a;
	a.re = x.re - y.re;
	a.im = x.im - y.im;
	cout << a.re << " + (" << a.im << ")i\n";
}

void ymnoz(chislo N1, chislo N2)//�������� ���������
{
	chislo a;
	a.re = x.re * y.re - x.im * y.im;
	a.im = x.re * y.im + x.im * y.re;
	cout << a.re << " + (" << a.im << ")i\n";
}

void delen(chislo N1, chislo N2)//�������� �������
{
	chislo a;
	a.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	a.im = (x.im * y.re - x.re * y.im) / (y.re * y.re + y.im * y.im);
	cout << a.re << " + (" << a.im << ")i\n";
}