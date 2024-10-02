#include<stdio.h>
void main()
{
    int k=0;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d",k%3);
            k++;
        }
        printf("\n");
    }
}

/* 		OUTPUT

 0
 1 2
 0 1 2
 0 1 2 0
 
 */