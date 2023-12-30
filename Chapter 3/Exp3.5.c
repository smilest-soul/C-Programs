#include<stdio.h>
int main(){
    int n,r,x=0;
    printf("Enter the 5 digit number");
    scanf("%d",&n);
    if(n%n==0){
        printf("The both numbers are equal: %d",n);
    }
    while(n!=0){
            r=n%10;
            x=x*10+r;
            n /=10;

        }
        printf("Reversed number is %d:",x);

}