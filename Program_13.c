/*
  Write a C program to calculate the sum of numbers from 1 to N.
*/

#include <stdio.h>

int Display_Numbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue1);

    iRet = Display_Numbers(iValue1);
    printf("Addition is : %d", iRet);

    return 0;
}