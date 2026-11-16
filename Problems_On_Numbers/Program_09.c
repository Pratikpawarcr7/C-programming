/*
    Program Name : Display Factors of a Number
    Description  : Accept a number and display the Perfect Number with Time Complexcity.
    Function     : DisplayFactor()
*/

#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);

    if (iRet == true)
    {
        printf(" %d is a perfect number", iValue);
    }
    else
    {
        printf(" %d is not a perfect number", iValue);
    }
    return 0;
}