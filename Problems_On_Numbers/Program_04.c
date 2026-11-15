/*
    Program Name : Check Divisibility by 3

    Description :
    Accept a number from the user and check whether
    it is divisible by 5 using a Boolean function.

    Function Name : CheckDivisible()

    Return Type : bool
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo) // Helper function dont use printf and scanf in this function
{
    int iResult = 0;
    iResult = iNo % 3; // iResult madhi 0 either 1 yeil

    if (iResult == 0)
    {
        return true; // true chi return value is 1
    }
    else
    {
        return false; // false chi return value is 0
    }
}
int main()
{

    int iValue = 0;
    bool bFlag = false; // false chi return value is 0 aasti mhanun 0 Aaivajii false write kela
    printf("Enter the number\n");
    scanf("%d\n", &iValue);

    bFlag = CheckDivisible(iValue);

    if (bFlag == true)
    {
        printf("%d is divisible by 3", iValue);
    }
    else
    {
        printf("%d is not divisible by 3", iValue);
    }

    return 0;
}
