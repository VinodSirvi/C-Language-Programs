#include <stdio.h>

int main() {
    int m;
    int n;
    int j;
    
     printf("Enter m:");
    scanf("%d", &m);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    printf("Prime numbers from %d to %d are:\n",m,n);

    while (m <= n) {
        j = 2;

        while (j < m && m % j != 0) {
            j++;
        }

        if (j == m)
            printf("%d ", m);

        m++;
    }

    return 0;
}