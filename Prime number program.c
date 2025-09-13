#include <stdio.h>

int main()
{
  int i=1;
  int n;
  int count=0;
  
  printf("enter number:");
  scanf("%d",&n);
  
  while(i<=n) {
      
      if(n%i==0){
          
          count++;
      }
     
     i++; 
  }
  
  if(count == 2) {
      printf("%d is prime number",n);
  }
  else {
      printf("%d is not a prime number",n);
  }
  return 0;
  
}
    
    
    
    
    

   