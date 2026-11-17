/*
  Write a C program to display even numbers from 1 to N.
*/

#include <stdio.h>

void Display_Numbers(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue1);

    Display_Numbers(iValue1);

    return 0;
}