#include<stdio.h>
int main(){
    int n,g;
    int a,b;
    printf("Enter the basic Salary");
    scanf("%d", &n);
    a=40;
    b=20;
    a=((n*a)/100);
    printf("His Dearness Allowance %d\n", a);
    b=((n*b)/100);
    printf("His room allowance :%d\n",b);
    g=a+b+n;
    printf("His Gross Salary :%d",g);
}