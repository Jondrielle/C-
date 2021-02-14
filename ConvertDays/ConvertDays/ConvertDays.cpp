// ConvertDays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a C program to find the max number out of three numbers
//

#include <iostream>
using namespace std;

int main()
{
	int value;
	int max = 0;
	int count = 3;

	
	for (int i = 0; i < count; i++) {
		cout << "Enter an integer: ";
		cin >> value;
		if (value > max) {
			max = value;
		}
	}

	cout << "The largest integer out of the three choices is: " << max;



}

