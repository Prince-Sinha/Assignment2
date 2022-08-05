#include<stdio.h>
int main(){
   int n,a,c;
   printf("Enter the three digit number: ");
   scanf("%d",&n);
   a=n%10;
   n=n/10;
   c=n+a*100;

   printf("The %d after rotate its digits by one position towards the right is %d",n,c);
  

    return 0;
}