#include <stdio.h>
int main() {
    int n;
    printf ("Enter A Year :");
    scanf("%d",&n);
    if(n%4==0 ,n%400==0 ){
        printf("The Year you Entered is a Leap Year");
    }
    else{
        printf("The Year You Entered is NOT a Leap Year\n");
    }
    return 0;
}