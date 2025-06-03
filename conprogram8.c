#include<stdio.h>

int SumFactor(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt < (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iSum = iSum + iCnt;
           
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

    iRet = SumFactor(iValue);

    printf("Sumition of factor is : %d\n",iRet);

    return 0;
}