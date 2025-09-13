#include<stdio.h>
int main() {

	char gender ;
	int age;
	
	printf("Enter gender (m/f): ");
	scanf("%c",&gender);

if(gender=='m' || gender=='f') {

	printf("enter your age:");
	scanf("%d",&age);
}

if(gender=='m' && age>=21) {

	printf("he can marry");
}

else if(gender=='m' && age<21) {

	printf("padhai karo!");

}

else if(gender=='f' && age>=18) {

	printf("she can marry");

}

else if(gender=='f' && age<18) {

	printf("chhoti bacchi ho kya!");
}

else {

	printf("invalid gender!");
}

return 0;

}