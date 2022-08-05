#include<stdio.h>
int main(){
   int n,d;
   printf("Enter the number and a digit: ");
   scanf("%d%d",&n,&d);
   int a=n*10;
   int b=a+d;
   printf("%d",b);
  

    return 0;
}