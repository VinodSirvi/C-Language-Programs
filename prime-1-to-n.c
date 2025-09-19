#include <stdio.h>

int main() {
    int n, i = 2, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Prime numbers from 1 to %d are:\n", n);

    while (i <= n) {
        j = 2;

        while (j < i && i % j != 0) {
            j++;
        }

        if (j == i)
            printf("%d ", i);

        i++;
    }

    return 0;
}
