#include<stdio.h>
int main() {

	int i =2;
	int j=2;
	int m;
	int n;


	printf("enter m:");
	scanf("%d",&m);


	printf("enter n:");
	scanf("%d",&n);

	printf("HCF :- ");

	while(m>1 || n>1) {

		if(m%i == 0 && n%j==0 && i==j)  {
			m=m/i;
			n=n/j;
			
			printf("%dx",i);
		   
        }
		else if(m%i==0) {
			m=m/i;

		}

		else if(n%j==0) {
			n=n/j;
		
		}

		else {

			i++;
			j++;
		}
	}



	return 0;
}