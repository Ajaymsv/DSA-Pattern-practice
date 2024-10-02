#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                printf(" %d",j);
            }
            else
            {
                printf(" %d",i);
        }
        }
        printf("\n");
    }
}

/*		OUTPUT

 1 1 1 1 1
 1 2 3 4 5
 3 3 3 3 3
 1 2 3 4 5
 5 5 5 5 5


*/