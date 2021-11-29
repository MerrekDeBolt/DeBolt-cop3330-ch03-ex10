/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Merrek DeBolt
 */

#include <iostream>
#include "std_lib_facilities.h"

int main() 
{
    string operation;
    double x, y, result;

    cout << "Please enter an operation and two operands, all separated by spaces: ";
    cin >> operation >> x >> y;

    if (operation == "+" || operation == "plus")
        result = x + y;
    else if (operation == "-" || operation == "minus")
        result = x - y;
    else if (operation == "*" || operation == "mul")
        result = x * y;
    else if (operation == "/" || operation == "div")
        result = x / y;

    cout << "Result: " << x << " " + operation + " " << y << " = " << result;

    return 0;
}