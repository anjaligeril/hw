// ch3q1.cpp : chapter 3 question 1


#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int lengthOfCall;
	char choice, dayL1, dayL2;
	double callStartTime, totalCost;
	do {
		cout << "Enter the start time of the call (0.00-24.00)\t";
		cin >> callStartTime;
		cout << "enter the length of the call in minutes\t";
		cin >> lengthOfCall;
		cout << "Enter the day of the week(Mo,Tu,We,Th,Fr,Sa,Su)\t";
		cin >> dayL1 >> dayL2;
		if ((dayL1 == 's' || dayL1 == 'S') && (dayL2 == 'a' || dayL2 == 'A' || dayL2 == 'u' || dayL2 == 'U')) {
			totalCost = lengthOfCall*0.15;
			cout << "Weekend \n";

		}
		else {
			cout << "WeekDay";
			if (callStartTime >= 8.00 && callStartTime <= 18.00) {
				totalCost = lengthOfCall*0.40;

			}
			else if (callStartTime<8.00 || callStartTime>18.00) {
				totalCost = lengthOfCall*0.25;
			}

		}
		cout << "The Cost of the call is $ \t" << totalCost;
		cout << "\n Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	system("pause");
	return 0;
}

