#include<stdio.h>
int main(){
   int x,y;
   printf("Enter the number: ");
   scanf("%d",&x);
   y=x%10;
   printf("The unit digit of %d number is %d",x,y);
    return 0;

}