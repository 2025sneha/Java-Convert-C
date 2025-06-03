#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
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
    bool bRet = false;
    
    printf("Enter the  number :  ");
    scanf("%d",&iValue1);

    bRet = CheckEven(iValue1);

    if(bRet == true)
    {
        printf("number is even : %d\n",iValue1);
    }
    else
    {
        printf("Number is odd : %d\n",iValue1);
    }

    return 0;
}