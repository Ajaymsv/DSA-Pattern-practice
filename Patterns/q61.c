#include<stdio.h>
void main()
{
    for(int i=1;i<=11;i++)
    {
        for(int j=1;j<=11;j++)
        {
            if(i==5||j==6||j==1&&i<=5||j==11&&i<=5)
            {
            printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*			OUTPUT



						 *         *         *
						 *         *         *
						 *         *         *
						 *         *         *
						 * * * * * * * * * * *
								   *          
								   *          
								   *          
								   *          
								   *          
								   *          
		   
		   
*/