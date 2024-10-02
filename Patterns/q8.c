#include<stdio.h>
void main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}

/* 				output


 5
 5 4
 5 4 3
 5 4 3 2
 5 4 3 2 1


*/