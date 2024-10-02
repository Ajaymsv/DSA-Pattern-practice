#include<stdio.h>
void main()
{
    int j;
    int k=1;
    for(int i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
               printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d",k);
        }
        k++;
        printf("\n");
    }

}

/*			OUTPUT

 123456789
  1234567
   12345
    123
     1
	 
*/