#include<stdio.h>

int main() {
    
    int i =1;
    int n ;
    int square =0;
    
    printf("enter your value:");
    scanf("%d",&n);
    
    while(i*i<=n) {
        
        if(i*i==n) {
            printf("perfect square root of %d = %d",n,i);
        }
        
        i++;
    }
    
     i--;  //for last valid value of i
    
    if(i*i!=n) {
        square = n/i;
       square = (square+i)/2;
        
        printf("approx sqaure root of %d = %d",n,square);
        
    }
    
    return 0;
}