#include<stdio.h>
int main() {

	int i =2;
	int m;
	int n;
	int lcm=1;

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
			lcm = lcm*i;
		}

		else if(m%i==0) {
			printf("%dx",i);
			m=m/i;
			lcm = lcm*i;
		}

		else if(n%i==0) {
			printf("%dx",i);
			n=n/i;
			lcm = lcm*i;
		}

		else {

			i++;
		}
	}

	printf("\nLCM=%d",lcm);

	return 0;
}