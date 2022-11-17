#pragma once
#include "Header.h"

// ������� ���� Complex (���������� �����) ��� �������������� ��� ��������� ���� ����. ������� ������������ ��������� ��� ��������� ������������ �������� ��� ������ � ������������ �������(�������� + , -, *, / ).

class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex& other);

	Complex& operator=(const Complex& other);
	Complex operator+(const Complex& other);
	Complex operator-(const Complex& other);
	Complex operator*(const Complex& other);
	Complex operator/(const Complex& other);

	friend ostream& operator<<(ostream& out, const Complex& other); // friend - �������� ��������� ������� ����
	friend istream& operator>>(istream& in, Complex& other); // friend - �������� ��������� ������� ����
};
