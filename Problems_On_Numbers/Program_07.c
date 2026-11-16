/*
    Program Name : Display Factors of a Number
    Description  : Accept a number and display all its factors with Time Complexcity.
    Function     : DisplayFactor()
*/

#include <stdio.h>
void DisplayFactor(int iNo)
{
    int iCnt = 0;
    printf("Factor of %d are \n", iNo);
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {

        if (iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{

    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
