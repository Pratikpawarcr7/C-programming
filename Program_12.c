/*
  Write a C program to display numbers from N to 1.
*/

#include <stdio.h>

void Display_Numbers(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n", iCnt);
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