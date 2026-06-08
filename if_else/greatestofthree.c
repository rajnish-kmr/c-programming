#include <stdio.h>
int main()
{
    int a, b, c; // all 3 are distinct
    printf("Enter a number A :");
    scanf("%d", &a);
    printf("Enter a number B :");
    scanf("%d", &b);
    printf("Enter a number C :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("A is greator than both B and  C");
    }
    else if (b > a && b > c)
    {
        printf("B is greator than both A and C");
    }
    else if (c > a && c > b)
    {
        printf("C is greator than both A and B");
    }
    return 0;
}