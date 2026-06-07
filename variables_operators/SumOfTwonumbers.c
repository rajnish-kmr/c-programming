#include <stdio.h>
int main(){
    float x;
    float y;
    printf("Enter First Number\n");
    scanf("%f",&x);

    printf("enter second  number \n");
    scanf("%f",&y);

    float sum = (x + y);
    printf("The sum of the number is %f",sum);

    return 0;
}