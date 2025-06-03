#include<stdio.h>

int main()
{    char Arr[50];
    int  iValue2 = 0;
    float fValue3 = 0;

    printf("Enter your name :  \n");
    scanf("%s",&Arr);

    printf("Enter your age :  \n");
    scanf("%d",&iValue2);

    printf("Enter your marks : \n");
    scanf("%f",&fValue3);

    printf("Name is :  %s \n",Arr);
    printf("Age is : %d \n",iValue2);
    printf("Marks is :  %.2f  \n",fValue3);

    return 0;
}