#ifndef Complex_h
#define Complex_h

bool c(double x, double y); //���������� ��� �������� ����������� ���������� ��������� ����� x � y
struct chislo //��������� ��������� � ����������� ������� ��������
{
	double re; //������ �������� �����
	double im; // ������ �������� �����
}; // ���������� �������
void pl(chislo N1, chislo N2); //��������
void min(chislo N1, chislo N2); //���������
void ymnoz(chislo N1, chislo N2); //���������
void delen(chislo N1, chislo N2); //�������

#endif