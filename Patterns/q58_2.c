#include<stdio.h>
void main()
{
    int i,k,j;
    for(i=1;i<=11;i++)
    {
        for(j=i;j<=11;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
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

/*			OUPPUT


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