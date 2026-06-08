#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length and breadth of rectangle : ");
    scanf("%d%d",&l,&b);
    int a = l*b;
    int p = 2 *(l+b);
    if (a>p){
        printf("Area is greater than perimeter");
    }
    else if (a<p){
        printf("Perimeter is greater than area");
    }
    else{
        printf("Area and perimeter are equal");
    }

    return 0;
}