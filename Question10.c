#include<stdio.h>
int main(){
   int n;
   printf("Enter the number: ");
   scanf("%d",&n);
   int a=n%10;
   int b=n-a;
   printf("%d",b);
  

    return 0;
}