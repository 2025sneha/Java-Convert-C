#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter numbers : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("count digits are : %d\n",iRet);

    return 0;
}