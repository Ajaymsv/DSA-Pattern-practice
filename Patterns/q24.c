#include<stdio.h>
void  main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
}

/*  OUTPUT

 5
 4 4
 3 3 3
 2 2 2 2
 1 1 1 1 1
 
 */