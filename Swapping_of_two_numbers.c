#include<stdio.h>

int main() {

	int a,b,c;
	printf("enter a value:");
	scanf("%d",&a);

    printf("enter b value:");
    scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	return 0;
}