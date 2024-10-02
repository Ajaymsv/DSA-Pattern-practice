#include<stdio.h>
void main()
{
    int k=2;
    for(int i=k;i<=6;i++)
    {
        k=i;
        for(int j=1;j<=5;j++)
        {
              printf(" %d",k);
              k++;
        }
        printf("\n");
    }
}


/*                           OUTPUT
							 2 3 4 5 6
							 3 4 5 6 7
							 4 5 6 7 8
							 5 6 7 8 9
							 6 7 8 9 10
*/