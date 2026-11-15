/*
    Program Name : Display Numbers from 1 to 10

    Description :
    Write a C program to create a user-defined function named Display() that displays numbers from 1 to 10
    using a for loop.

    Function Name : Display()

    Logic :
    1. Initialize a counter variable iCnt.
    2. Use a for loop starting from 1.
    3. Repeat the loop until iCnt reaches 10.
    4. Display each number using printf().

    Main Function :
    Call the Display() function from main().
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