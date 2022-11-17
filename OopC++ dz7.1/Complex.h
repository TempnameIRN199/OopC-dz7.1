#pragma once
#include "Header.h"

// Створіть клас Complex (комплексне число) або використовуйте вже створений вами клас. Створіть перевантажені оператори для реалізації арифметичних операцій для роботи з комплексними числами(операції + , -, *, / ).

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

	friend ostream& operator<<(ostream& out, const Complex& other); // friend - дозволяє викликати приватні поля
	friend istream& operator>>(istream& in, Complex& other); // friend - дозволяє викликати приватні поля
};
