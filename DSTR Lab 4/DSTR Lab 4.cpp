// DSTR Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Question 1

void RecursiveReverseDisplayNumber(int number1, int number2) {

    if (number2 < number1)
        return;

    cout << number2;

    if (number2 != number1)
        cout << " + ";

    RecursiveReverseDisplayNumber(number1, number2 - 1);

}


int RecursiveCalSum(int number1, int number2) {

    if (number1 > number2)
        return 0;

    return number2 + RecursiveCalSum(number1,number2 - 1);
}


main()
{
    int startvalue, endvalue;
    cout << "Enter a start value:";
    cin >> startvalue; 
    cout << "Enter an end value: ";
    cin >> endvalue;
    cout << endl;

    RecursiveReverseDisplayNumber(startvalue, endvalue);

    cout << " = " << RecursiveCalSum(startvalue, endvalue) << endl;

    return 0;

}

//Question 2

