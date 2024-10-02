#include<stdio.h>
void  main()
{
    for(int i=11;i>=1;i--)
    {
        for(int j=11;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            if(i==11||k==1||k==i)
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


/*				OUTPUT


			  * * * * * * * * * * *
			   *                 *
				*               *
				 *             *
				  *           *
				   *         *
					*       *
					 *     *
					  *   *
					   * *
						*
	


*/