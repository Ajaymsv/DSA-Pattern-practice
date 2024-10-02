#include<stdio.h>
void  main()
{
    for(int i=1;i<=11;i++)
    {
        for(int j=1;j<=11;j++)
        {
            if(i==6||j==6||i==1&&j>=6||j==11&&i>=6||j==1&&i<=6||i==11&&j<=6||i==3&&j==3||i==9&&j==3||j==9&&i==3||j==9&&i==9)
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


/*		OUTPUT

					 *         * * * * * *
					 *         *          
					 *   *     *     *    
					 *         *          
					 *         *          
					 * * * * * * * * * * *
							   *         *
							   *         *
						 *     *     *   *
							   *         *
					 * * * * * *         *
					 
 */