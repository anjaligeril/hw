// pattern2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int space=1;
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		if (space > 1) {
			for (int k = 1; k < space; k++) {
				cout << " ";
				cout << " ";
			}
		}
		for (int l = 1; l <= i; l++) {
			cout << "*";
		}

		cout << "\n";
		space++;
	}
	space = 5;
	for (int i = 1; i <=5; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		if (space >1) {
			for (int k = space; k >1; k--) {
				cout << " ";
				cout << " ";
			}
		}
		for (int l = 1; l <= i; l++) {
			cout << "*";
		}

		cout << "\n";
		space--;
	}

	system("pause");
    return 0;
}

