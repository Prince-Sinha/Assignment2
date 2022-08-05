#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number : ");
    scanf("%d%d",&a,&b);
    printf("After the swaping number is %d %d",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("\nAfter the swaping number is %d %d",a,b);


    return 0;
}