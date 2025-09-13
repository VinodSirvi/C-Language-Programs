#include <stdio.h>

int main()
{
    
    int n;
    int sum =0;
    int digit=0;
    
    printf("enter n value:");
    scanf("%d",&n);
    
    
    while(n>0){
    
    digit = n%10;
    printf("%d\n",digit);
    sum = sum+digit;
    n=n/10;
        
    }
    
    printf("sum of digit:-%d",sum);
    return 0;
}
