#include<stdio.h>
void main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=i;j++)
        {
                printf(" ");   
        }
        for(int k=1;k<=6;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*		OUTPUT

 ******
  ******
   ******
    ******
     ******
      ******
	  
*/