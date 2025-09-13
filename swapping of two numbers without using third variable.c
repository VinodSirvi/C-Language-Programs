

#include <stdio.h>

int main()
{
    
    int a;
    int b;
    printf("enter a value:");
    scanf("%d",&a);
    
    printf("enter b value:");
    scanf("%d",&b);
    
    printf("a=%d and b=%d\n",a,b);
    
    printf("after swapping\n");
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("a=%d and b=%d",a,b);

    return 0;
}