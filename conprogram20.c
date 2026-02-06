#include<stdio.h>

int Reverse(int iNo)
{
    int iCnt = 0, iDigit = 0, iRev  = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&ivalue);

    iRet = Reverse(ivalue);

    printf("Reverse number is : %d\n ",iRet);

    return 0;
}