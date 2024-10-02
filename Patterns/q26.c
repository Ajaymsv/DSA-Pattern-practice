#include<stdio.h>
void main()
{
    int x=-1,y=1,z;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
          z=x+y;
         printf(" %d",z);
         x=y;
         y=z;
        }
        printf("\n");
    }
}

/*		OUTPUT

 0
 1 1
 2 3 5
 8 13 21 34
 
 */