#include <stdio.h>

int main() {

	int n;
	int k;
	int count = 0;
	int power = 1;
	int temp;
	int digit = 0;

	printf("enter n:");
	scanf("%d",&n);

	printf("enter k:");
	scanf("%d",&k);

	temp = n;
	while (temp > 0) {   
		count++;
		power = power * 10;
		temp = temp / 10;
	}

	k = k % count;  

	while (k > 0) {
		digit = n % 10;               
		n = n / 10;                   
		n = digit * (power / 10) + n;   
		k--;
	}

	printf("Rotation = %d", n);
	return 0;
}
