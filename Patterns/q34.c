#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j)
            {
                printf(" 0");
            }
            else
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
}

/*		OUTPUT

 0 2 3 4 5
 1 0 3 4 5
 1 2 0 4 5
 1 2 3 0 5
 1 2 3 4 0
 
 */