#include <stdio.h>
int main(){
    float x  ;
    printf("Enter a Number in Decimal : ");
    scanf ("%f",&x);
    int y = x;
    printf("Your fraction part of this number is :%d\n",y );
    float z = x - y;
    printf("Your Decimal part of this number is %f",z);
    return 0;
}
