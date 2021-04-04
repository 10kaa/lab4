#pragma once
#include "iostream"
using namespace std;

class Complex
{
private:
		double re;//�������������� �����
		double im;//������ �����

public:
		double Re() const;
		double Im() const;
		Complex(double re, double im);
		friend Complex sin(const Complex& z);
		Complex operator+(const Complex& rhs);
		Complex operator*(const Complex& rhs);
		Complex operator-(const Complex& rhs);
		Complex operator/(const Complex& rhs);
		friend ostream& operator<<(ostream & stream, const Complex& z);
};

Complex y(const Complex& z);

