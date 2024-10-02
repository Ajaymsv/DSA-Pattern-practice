#include<stdio.h>
void main()
{
    char h=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" %c",h++);
        }
       printf("\n");
    }
}

/* 		OUTPUT

      A
     B C
    D E F
   G H I J
  K L M N O
  
  */