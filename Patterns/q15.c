#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf(" %d",j);
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}

  /*   					OUTPUT
  
						 1 * * * *
						 1 2 * * *
						 1 2 3 * *
						 1 2 3 4 *
						 1 2 3 4 5
						 
*/