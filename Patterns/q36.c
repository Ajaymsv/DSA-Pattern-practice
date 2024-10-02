#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i%2==1)
            {
                printf(" %d",j);
            } 
        }
        for(int k=5;k>=1;k--)
        {
        if(i%2==0)
        {
            printf(" %d",k);
        }
        }
        printf("\n");
    }
}

/*		OUTPUT

 1 2 3 4 5
 5 4 3 2 1
 1 2 3 4 5
 5 4 3 2 1
 1 2 3 4 5

*/