#include<stdio.h>
void main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf(" 6");
        printf("\n");
    }
}


/*							  OUTPUT
								 6
								 1 6
								 1 2 6
								 1 2 3 6
								 1 2 3 4 6
								 1 2 3 4 5 6

 
*/