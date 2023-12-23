#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter five digit number:\n");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum +=r;
        n/=10;
    }
    printf("Sum fo the digits is%d\n",sum);
}