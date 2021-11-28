
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dynie Mesoneuvre
 */


#include <iostream>

using namespace std;

int main()
{
    //initializing int variable
    int num;
    //asking for the input and setting it as int num
    cout << "Input Number: ";
    cin >> num;

    //if statement based on whether or not num is even
    if( num % 2 == 0)
    {
        //output statement
        cout << num << " is an even number.";
    }

    //else statement if num is not even
    else
    {
        //output statement
        cout << num << " is an odd number.";
    }


    return 0;
}
