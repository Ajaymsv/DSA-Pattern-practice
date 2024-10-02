#include<stdio.h>
void main()
{
    for(int i=1;i<=11;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==j||i==11||j==1)
            
                printf(" *");
            
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


/*			OUTPUT


						 *
						 * *
						 *   *
						 *     *
						 *       *
						 *         *
						 *           *
						 *             *
						 *               *
						 *                 *
						 * * * * * * * * * * *


*/