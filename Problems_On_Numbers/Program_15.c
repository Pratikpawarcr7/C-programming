/*
  Write a C program to check whether a number is positive or negative.
*/

#include <stdio.h>
#include <stdbool.h>

bool Display_Positive_Negative(int iNo)
{
    int iCnt = 0;

    if (iNo > 0)
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
    int iValue1 = 0;
    bool bFlage = false;

    printf("Enter the Number : ");
    scanf("%d", &iValue1);

    bFlage = Display_Positive_Negative(iValue1);

    if (bFlage == true)
    {

        printf("%d is Positive ", iValue1);
    }
    else
    {
        printf("%d is Negative ", iValue1);
    }

    return 0;
}