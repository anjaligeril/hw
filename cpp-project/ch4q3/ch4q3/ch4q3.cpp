// ch4q3.cpp : chapter 4 question 3
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double calculateHatSize(double height, double weight) {
	double hatSizeResult;
	hatSizeResult = (weight / height)*2.9;
	return hatSizeResult;
}

double calculateJacketSize(double height, double weight, int age) {
	double jacketSizeResult;
	int count;
	jacketSizeResult = (height*weight) / 288;
	count = age / 10;
	if (count > 3) {
		for (count; count > 3; count--) {

			jacketSizeResult = jacketSizeResult + 0.125;
		}

	}
	return jacketSizeResult;
}

double calculateWaist(double height, double weight, int age) {
	double waistResult;
	int temp;
	waistResult = weight / 7.5;
	if (age > 28) {
		temp = age - 28;
		for (temp; temp > 0; temp--) {
			if (temp % 2 == 0) {
				waistResult = waistResult + 0.10;
			}
		}

	}
	return waistResult;
}

int main()
{
	double height, weight, hatSize, jacketSize, waist, jacketSizeNew, waistNew;
	int age,newAge;
	char choice;
	do {
		cout << "Enter the weight in pounds \n";
		cin >> height;
		cout << "Enter the height in inches \n";
		cin >> weight;
		cout << "Enter the age \n";
		cin >> age;
		hatSize = calculateHatSize(height, weight);
		cout << "The hat size is" << hatSize << endl;
		jacketSize = calculateJacketSize(height, weight, age);
		cout << "jacket size" << jacketSize << endl;
		waist = calculateWaist(height, weight, age);
		cout << "waist is" << waist << endl;
		newAge = age + 10;
		jacketSizeNew = calculateJacketSize(height, weight, newAge);
		cout << "jacket size after 10 years" << jacketSizeNew << endl;
		waistNew = calculateWaist(height, weight, newAge);
		cout << "waist after 10 years" << waistNew << endl;
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	system("pause");
	return 0;
}


