#include<stdio.h>
int main(){
    printf("Enter a number is ");
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("its neither odd or even");
    } else if (n%2==0){
        printf("Its even");

    } else {
        printf("Its odd ");
    }
    return 0;
}