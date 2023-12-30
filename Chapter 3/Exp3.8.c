#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int absoluteValue = (n < 0) ? -n : n;
    printf("The absolute value is %d",absoluteValue);
}