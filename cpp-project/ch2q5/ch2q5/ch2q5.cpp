// ch2q5.cpp : Chapter2 question5
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	char choice;
	int maxRoomCapacity, noOfPeopleAttending, additionalPeople, excludPeople;
	do {
		cout << "Enter the maximum room capacity of the meeting room\t";
		cin >> maxRoomCapacity;
		cout << "Enter the number of people attending the meeting\t";
		cin >> noOfPeopleAttending;
		if (noOfPeopleAttending<=maxRoomCapacity) {
			cout << "It is legal to hold the meeting in this meeting room\n";
			additionalPeople = maxRoomCapacity - noOfPeopleAttending;
			if (additionalPeople > 0) {
				cout <<additionalPeople <<" more people can legally attend this meeting\n";
			}
			else {
				cout << "No additional room for more people\n ";
			}
		}
		else {
			cout << "The meeting cannot be held as planned due to fire regulation\n";
			excludPeople = noOfPeopleAttending - maxRoomCapacity;
			cout << excludPeople << " people must be excluded in order to meet the fire regulation\n";
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	system("pause");
    return 0;
}

