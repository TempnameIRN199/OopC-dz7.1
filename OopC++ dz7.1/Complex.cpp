#include "Header.h"
#include "Complex.h"

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(double real, double imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

Complex::Complex(const Complex& other)
{
	real = other.real;
	imaginary = other.imaginary;
}


Complex& Complex::operator=(const Complex& other)
{
	if (this == &other)
		return *this;

	real = other.real;
	imaginary = other.imaginary;

	return *this;
}

Complex Complex::operator+(const Complex& other)
{
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other)
{
	return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other)
{
	return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

Complex Complex::operator/(const Complex& other)
{
	return Complex((real * other.real + imaginary * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary), (imaginary * other.real - real * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary));
}

ostream& operator<<(ostream& out, const Complex& other)
{
	out << other.real << " + " << other.imaginary << "i";
	return out;
}

istream& operator>>(istream& in, Complex& other)
{
	in >> other.real >> other.imaginary;
	return in;
}
