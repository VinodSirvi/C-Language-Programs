#include <stdio.h>

int main() {

	char g;
	int a;

	printf("Enter gender (m/f): ");
	scanf(" %c",&g);

	if(g=='m'||g=='f') {

		printf("Enter age: ")
		scanf("%d",&a);

		if(g=='m' && a>=21) {

			printf("he can marry");

		}

		else if(g=='m') {

			printf("padhai karo");

		}

		else if(g=='f' && a>=18) {

			printf("she can marry");
		}

		else {

			printf("chhoti bacchi ho kya");
		}

	}

	else {
		printf("invalid gender");


	}

	return 0;
}
