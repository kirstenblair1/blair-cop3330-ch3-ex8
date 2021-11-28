/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution ch 3 ex 8
 *  Copyright 2021 kirsten blair
 */

#include "std_lib_facilities.h"

int main(){
    int n;

    cout << "Enter integer value: ";

    cin >> n;

    if (n%2 == 0)
    {
        cout << "The value " << n << " is an even number.\n";
    }

    else
    { 
        cout << "The value " << n << " is an odd number.\n";

    }

    return 0;

}


