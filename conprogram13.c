#include<stdio.h>

int Countdigits(int iNo)
{
   int iCnt = 0;
   
   while (iNo != 0)
   {
      iNo = iNo / 10;
      iCnt++;
   }
   return iCnt;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter numbers : ");
    scanf("%d",&iValue);

    iRet = Countdigits(iValue);

    printf("Count digits are : %d\n",iRet);

    return 0;
}