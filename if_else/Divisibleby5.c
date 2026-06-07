#include <stdio.h>
int main(){
int n;
printf("Enter a Number :");
scanf("%d",&n);
if(n%5==0){
printf("Divisible by 5");
}
else{
printf("Not Divisible BY 5");
}
return 0;
}