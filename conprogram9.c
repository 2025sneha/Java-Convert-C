#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt < (iNo /2); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
           printf("%d\n",iCnt);
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DisplayNonFactors(iValue);

    return 0;
}