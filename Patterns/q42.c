#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d",i);
        }
    printf("\n");
    }
}
/* 		OUTPUT

	 1
    222
   33333
  4444444
 555555555
 
 */