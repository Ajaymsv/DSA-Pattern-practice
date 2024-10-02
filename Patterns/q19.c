#include<stdio.h>
void main()
{

    for(int i=1;i<=7;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
        {
        printf(" 1");
        }
        else
        {
            printf(" 0");
        }
    
        }
        printf("\n");
    }
}

					/*   output
					 1
					 0 1
					 1 0 1
					 0 1 0 1
					 1 0 1 0 1
					 0 1 0 1 0 1
					 1 0 1 0 1 0 1
	*/