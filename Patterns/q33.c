#include<stdio.h>
void main()
{
    char c=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                printf(" %c",c);
            }
            else
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
}


/*		OUTPUT

1 2 3 4 5
 A A A A A
 1 2 3 4 5
 A A A A A
 1 2 3 4 5

*/