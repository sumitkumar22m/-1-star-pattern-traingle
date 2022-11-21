#include<stdio.h>
#include<conio.h>
void main()
{

    int j=1,k=1,i=5,m=4;
    while(j<=5)
    {
       while(k<=i)
       {
           if(k<=m)
           {
               printf(" ");
           }
           else
           {
               printf("*");
           }
           k++;
       }
       i++;
       if(i==10)
       {
           break;
       }
       j++;
       k=1;
       printf("\n");
       m--;
       if(m==-1)
       {
           break;
       }
    }
    getch();
}
