// ch4q4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void getString(int number) {
	string number1, number2;
	int temp1,temp2,temp;
	temp = number;
	temp1 = temp % 10;
	temp = temp / 10;
	temp2 = temp % 10;
	cout << temp2 << temp1 << endl;
	if (temp2 == 9) {
		number1 = "Ninety";
	}
	else if (temp2 = 8) {
		number1 = "Eighty";
	}
	else if (temp2 = 7) {
		number1 = "Seventy";
	}
	else if (temp2 = 6) {
		number1 = "Sixty";
	}
	else if (temp2 = 5) {
		number1 = "Fifty";
	}
	else if (temp2 = 4) {
		number1 = "Fourty";
	}
	else if (temp2 = 3) {
		number1 = "Thirty";
	}
	else if (temp2 = 2) {
		number1 = "Twenty";
	}
	else if (temp2 == 1) {

	}
	else if (temp2 == 0) {
		if (temp1 == 9) {
			number2 = "-nine";
		}
		else if (temp1 == 8) {
			number2 = "-eight";
		}
		else if (temp1 == 7) {
			number2 = "-seven";
		}
		else if (temp1 == 6) {
			number2 = "-six";
		}
		else if (temp1 == 5) {
			number2 = "-five";
		}
		else if (temp1 == 4) {
			number2 = "-four";
		}
		else if (temp1 == 3) {
			number2 = "-Three";
		}
		else if (temp1 == 2) {
			number2 = "-Two";
		}
	}
	if (temp1 == 9) {
		number2 = "-nine";
	}else if (temp1 == 8) {
		number2 = "-eight";
	}else if (temp1 == 7) {
		number2 = "-seven";
	}else if (temp1 == 6) {
		number2 = "-six";
	}else if (temp1 == 5) {
		number2 = "-five";
	}
	else if (temp1 == 4) {
		number2 = "-four";
	}
	else if (temp1 == 3) {
		number2 = "-Three";
	}
	else if (temp1 == 2) {
		number2 = "-Two";
	}
}

int main()
{
	int number, i;
	cout << "Song- Ninteen bottles of beer on the wall:\n";
	for (i = 99; i >= 0; i--) {
		getString(i);
	}

	system("pause");
    return 0;
}

