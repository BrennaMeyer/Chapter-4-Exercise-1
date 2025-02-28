// Chapter 4 Exercise 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer: Brenna Meyer
// Date: Feb 28th,2024
//Requirements: Write a program that asks the user to enter two numbers. 
// The program should use the conditional operator to determine which number is the smaller and which is the larger
#include <iostream>
using namespace std;

int main()
{
	int num1,
		num2;

	cout << endl;
	cout << "Enter The First Number:";
	cin >> num1;
	cout << "Enter The Second Number:";
	cin >> num2;
	cout << endl;

	if (num1 < num2)
	{
		cout << "The First Number(" << num1 << ")";
		cout << "is the smallest" << endl;

		cout << "The Second Number(" << num2 << ")";
		cout << "is the largest" << endl;
		}
	else
	{
		cout << "The First Number(" << num1 << ")";
		cout << "is the largest" << endl;

		cout << "The Second Number(" << num2 << ")";
		cout << "is the smallest" << endl;
	}

	cout << endl;

	return 0;
}


