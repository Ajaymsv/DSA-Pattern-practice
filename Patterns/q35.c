#include<stdio.h>
void  main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i+j==3||i+j==5||i+j==7||i+j==9)
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

/*		OUTPUT

 1 * 3 * 5
 * 2 * 4 *
 1 * 3 * 5
 * 2 * 4 *
 1 * 3 * 5

*/