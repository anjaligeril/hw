// ch1q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i;
	for ( i= 0; i < 10; i++) {
		if (i == 0 || i == 9) {
			cout << "  "<<"CCC\n";
		}
		else if (i == 1 || i == 8) {
			cout << "C" << "     " << "C\n";
		}
		else {
			cout << "C\n";
		}

	}
	system("pause");
    return 0;
}

