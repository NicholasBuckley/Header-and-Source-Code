// Learning Functions Test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Nicholas Buckley 10.28.2018

#include "Adventure.h"
#include <iostream>
#include <string>


using namespace std;



// main function
int main()
{
	Instructions(); // call instrunction function

	string name = GetText("Please enter a name: "); // return get text to string name
	string weapon = GetText("Please enter a weapon: "); // return get text to string weapon
	int number = GetNumber(); // return get number to int number
	string bodyPart = GetText("Please enter a body part: "); //return get text to string body part
	string queen = GetText("Please enter a second name: "); // return get text to string name

	Tellstory(name, weapon, number, bodyPart, queen); // call tell story function

	system("pause"); // pause system
	return 0;
}

