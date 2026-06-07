#include <stdio.h>
int main() {
int a,b; // a > b
printf("Enter Divident : ");
scanf("%d",&a);
printf("Enter Divisor : ");
scanf("%d",&b);
// int q = a/b;
// int r = a - b*q; // Divisor* quotient + remainder = divident
// printf("The Remainder When %d id divided by %d is : %d",a,b,r);
int r = a % b; // Modulo operator gives the remainder
printf("The Remainder When %d id divided by %d is : %d",a,b,r);
    return 0;
}