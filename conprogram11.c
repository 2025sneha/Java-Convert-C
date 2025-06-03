#include<stdio.h>

int Sum(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("Sum of even number is :%d\n",iSum1);
    printf("sum of odd number is : %d\n",iSum2);
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Sum(iValue);

    return 0;
}