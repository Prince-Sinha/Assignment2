#include<stdio.h>
int main(){
   int x,y,temp;
   printf("Enter the two number: ");
   scanf("%d%d",&x,&y);
   printf("Before the swaping number is %d %d",x,y);
   temp=y;
   y=x;
   x=temp;
   printf("\nAfter the swaping number is %d %d",x,y);
    return 0;

}