#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}


/* 		output


			 5 4 3 2 1
			 5 4 3 2
			 5 4 3
			 5 4
			 5
 
 */