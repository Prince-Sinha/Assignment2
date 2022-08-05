#include<stdio.h>
int main(){
   int n;
   printf("Enter the number: ");
   scanf("%d",&n);
   if(n & 1==1){
      printf("The given number is odd");
   }
   else{
    printf("The given number is even");
   }

    return 0;
}