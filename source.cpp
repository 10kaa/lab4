#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#include "Complex.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int real=1, imaginary=3;
	Complex z(real, imaginary);
	cout << "z = " << z << endl;
	Complex Name(1,3);
	y(Name);
	cout <<y(Name)<< endl << endl;
	cout << "Проверка:" << endl;
	cout << "y(z) = 2*z +sin(z-i)\ny(z) = " 
		<< Complex(2, 0) * z + sin(Complex(0, -1) + z);
}
