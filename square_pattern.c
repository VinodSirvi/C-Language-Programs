#include <stdio.h>

int main() {
    
    int i ;
    int j;
    int n;
    int temp;
    
    printf("emter n :");
    scanf("%d",&n);
    
    temp =1;
    
    for(i=1; i<=n; i++) {
        
    for(j=1; j<=n; j++) {
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;
}