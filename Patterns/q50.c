#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j||i+j==6)
            {
                printf(" *");
            }
            else
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
}

/* 				OUTPUT

 * 2 3 4 *
 1 * 3 * 5
 1 2 * 4 5
 1 * 3 * 5
 * 2 3 4 *
 
 */