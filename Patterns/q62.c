#include<stdio.h>
void main()
{
    for(int i=1;i<=11;i++)
    {
        for(int j=1;j<=11;j++)
        {
            if(i==1||i==11||j==1||j==11||i==6||j==6||i+j==7||j-i==5||i-j==5||i+j==17)
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

/*					output



						 * * * * * * * * * * *
						 *       * * *       *
						 *     *   *   *     *
						 *   *     *     *   *
						 * *       *       * *
						 * * * * * * * * * * *
						 * *       *       * *
						 *   *     *     *   *
						 *     *   *   *     *
						 *       * * *       *
						 * * * * * * * * * * *
 
 
 */