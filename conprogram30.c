/*
Input  : 4
output : a  a  a  a
         B  B  B  B
         c  c  c  c
         D  D  D  D
          
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = 'a', ch2 = 'A';

    for(i = 1, ch1 = 'a', ch2 = 'A'; i <= iRow; i++, ch1++, ch2++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}