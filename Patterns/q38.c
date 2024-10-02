#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==3)
            {
                printf(" %d",j*3);
            }
            else if(i==4)
            {
                printf(" %d",j*2);
            }
           else if(i==5)
            {
                printf(" %d",j*5);
            }
           else
           { printf(" %d",j);
           }
        }
        printf("\n");
    }
}

/*			OUTPUT

 1 2 3 4 5
 1 2 3 4 5
 3 6 9 12 15
 2 4 6 8 10
 5 10 15 20 25


*/