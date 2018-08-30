// pattern2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int count=1;
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		if (count > 1) {
			for (int k = 1; k < count; k++) {
				cout << " ";
				cout << " ";
			}
		}
		for (int l = 1; l <= i; l++) {
			cout << "*";
		}

		cout << "\n";
		count++;
	}
	count = 5;
	for (int i = 1; i <=5; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		if (count >1) {
			for (int k = count; k >1; k--) {
				cout << " ";
				cout << " ";
			}
		}
		for (int l = 1; l <= i; l++) {
			cout << "*";
		}

		cout << "\n";
		count--;
	}

	system("pause");
    return 0;
}

