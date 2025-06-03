#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    printf("Enter two numbers : ");
    scanf("%d %d",&iValue1, &iValue2);

    iAns = iValue1 + iValue2;

    printf("Addition of two number is : %d\n",iAns);

    return 0;


}