#include <stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
if(n%2==0){ // ==  ye equate karne ke liye use hota hai
printf("Even Number");
}
// if(n%2!=0);{ // != iska matlab not equal to
// printf("Odd Number");}
else{
    printf("Odd Number");
}
  return 0;
}