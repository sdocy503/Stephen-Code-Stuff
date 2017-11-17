// fares.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	string driverSenior;
	string bicycle;
	float adults;
	float youths;
	float seniors;
	float height;
	float length;
	float price = 0.0;
	cout << "Hello, welcome to the Washington State Ferry!, let me just ask you a few questions.\n";
	cout << "Is the driver a senoir or disabled?  Please answer yes or no.\n";
	cin >> driverSenior;
	cout << "Ok, how many adults are with you other then the driver?\n";
	cin >> adults;
	price = adults * 12.95;
	cout << "And how many youths?\n";
	cin >> youths;
	price = price + (youths * 6.45);
	cout << "And how many seniors or disabled people are in your group?\n";
	cin >> seniors;
	price = price + (seniors * 6.45);
	cout << "Do you have a bicycle?  Answer yes or no.\n";
	cin >> bicycle;
	if (bicycle == "yes" || bicycle == "Yes") {
		price = price + 2.00;
		cout << "Bike registered\n";
	}
	cout << "Ok, how tall is your vehicle in feet?\n";
	cin >> height;
	if (height < 14) {
		if (driverSenior == "yes") {
			price = price + 29.55;
		}
		else {
			price = price + 36.05;
		}
	}
	else if (height < 22 && height >= 14) {
		if (driverSenior == "yes" || driverSenior == "Yes") {
			price = price + 38.50;
		}
		else {
			price = price + 45.00;
		}
	}
	else {
		cout << "I'm sorry, your vehicle is too tall, you can't come on the ferry.\n";
		while (1 == 1) {
			
		}
	}
	cout << "How long is your vehicle in feet?\n";
	cin >> length;
	if (length >= 22 && length < 30) {
		price = price + 69.60;
	}
	else if (length >= 30 && length < 40) {
		price = price + 185.95;
	}
	else if (length >= 40 && length < 50) {
		price = price + 232.95;
	}
	else {
		cout << "Your vehicle's size is not allowed on the ferry.\n";
		while(1 == 1) {

		}
	}
	cout << "Your total for today is:\n";
	cout << price;


    return 0;
}

