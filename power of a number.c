#include <stdio.h>

int main()
{
   int i=1;
   int x;
   int y;
   int result =1;
   
   printf("enter x:");
   scanf("%d",&x);
   
    printf("enter y:");
   scanf("%d",&y);
   
   while(i<=y) {
       
       result = result*x;
       
       i++;
   }
   
   printf("%d^%d=%d",x,y,result);

    return 0;
}