#pragma once

#ifndef ADVENTURE_H
#define ADVENTURE_H

// TODO: add headers that you want to pre-compile here
//function prototype(declaration)

#include <iostream>
#include <string>

using namespace std;

void Instructions(); // function to display instructions
string GetText(string prompt); // function to gather input
int GetNumber(int high = 10, int low = 1); // getting number function
void Tellstory(string name, string weapon, int number, string bodypart, string queen); // telling story function
#endif //ADVENTURE_H