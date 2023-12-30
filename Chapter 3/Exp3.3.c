#include<stdio.h>
int main(){
    int n;
    printf("Enter the year");
    scanf("%d",&n);
    if (n%4==0){
        printf("Its a Leap Year");
    } else {
        printf("its a not a leap year");
    }
}