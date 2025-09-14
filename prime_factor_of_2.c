#include<stdio.h>
int main() {
    
    int i =2;
    int m ;
    int n;
    
    printf("enter m:");
    scanf("%d",&m);
    
    
    printf("enter n:");
    scanf("%d",&n);
    
    printf("prime fector :- ");
    
    while(m>1 || n>1) {
        
        if(m%i == 0 && n%i==0)  {
            m=m/i;
            n=n/i;
            printf("%dx",i);
        }
        
        else if(m%i==0) {
            printf("%dx",i);
            m=m/i;
        }
        
         else if(n%i==0) {
            printf("%dx",i);
            n=n/i;
        }
        
        else {
            
            i++;
        }
    }
    
    return 0;
}