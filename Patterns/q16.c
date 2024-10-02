#include<stdio.h>
void main()
{ 
    int c;
    for(int i=1;i<=5;i++)
    {
        c=i;
        for(int j=1;j<=5;j++)
        {
            if(c%2==0)
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


 /* 				OUTPUT

					 1 2 3 4 5
					 * * * * *
					 1 2 3 4 5
					 * * * * *
					 1 2 3 4 5
*/