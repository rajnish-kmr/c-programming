#include <stdio.h>
int main (){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if (n>99 && n<1000){
        printf(" The number you entered is a three digit number");
    }
    else{
        printf(" The number you entered is not a three digit number");
    }
    return 0;
}