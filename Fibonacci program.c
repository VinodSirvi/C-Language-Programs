#include <stdio.h>

int main()
{
   int i=1;
   int n;
   int a=0;
   int b=1;
   int c=0;
   
   printf("enter number:");
   scanf("%d",&n);
   
   while(i<=n) {
       
       printf("%d",a);
       c=a+b;
       a=b;
       b=c;
       
       i++;
   }

    return 0;
}