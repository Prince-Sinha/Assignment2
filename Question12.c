#include<stdio.h>
int main(){
   float n,a;
   printf("Enter the amount in Indian Rupee: ");
   scanf("%f",&n);
   a=(n/76.23);

   printf("Rs. %f in US Dollar is $ %f",n,a);
  

    return 0;
}