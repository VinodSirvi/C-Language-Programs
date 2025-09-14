#include<stdio.h>
int main() {
    
    int i =2;
    int n;
    
    printf("enter n:");
    scanf("%d",&n);
    
    printf("prime fector :- ");
    
    while(n>1) {
        
        if( n%i == 0) {
            
            printf("%dx",i);
            
            
            n=n/i;
            
        }
        
        else {
            
            i++;
        }
    }
    
    return 0;
}