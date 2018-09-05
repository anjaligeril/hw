// ch3q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	double determinant,root1,root2,real,imaginary;
	char choice;
	do {
		cout << "Enter the value of a \t";
		cin >> a;
		cout << "Enter the value of b\t";
		cin >> b;
		cout << "Enter the value of c \t";
		cin >> c;
		determinant = pow(b, 2) - 4 * a*c;
		if (determinant == 0) {
			root1 = -b /( 2 * a);
			cout << "The root of the quadratic equation is \t" << root1;
		}
		else if (determinant > 0) {
			root1 = (-b + (sqrt(determinant))) / 2 * a;
			root2 = (-b - (sqrt(determinant))) / 2 * a;
			cout << "The root of the quadratic equation is \t" << root1 <<"\t"<< root2;
		}
		else {
			real = -b / (2 * a);
			imaginary = sqrt(-determinant) / (2 * a);
			cout << "The root of the quadratic equation is \t";
			cout  << real << "+" << imaginary << "i" << "\t";
			cout  << real << "-" << imaginary << "i" << endl;

		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	system("pause");
    return 0;
}

