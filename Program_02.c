/*
    Program Name : Display Numbers up to N

    Description :
    Write a C program to accept one integer number from the user and display all numbers from 1
    up to the entered number using a for loop.

    Function Name : Display()

    Parameter : iNo - Accepts an integer number.

    Logic :
    1. Initialize the counter variable iCnt to 0.
    2. Start the for loop from 1.
    3. Repeat the loop until iCnt is less than
       or equal to iNo.
    4. Display each number using printf().
*/

#include <stdio.h>

void Display()
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{

    Display();

    return 0;
}