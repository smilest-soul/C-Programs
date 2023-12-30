#include<stdio.h>
int main(){
    int l,b,area,peri;
    printf("Enter Length and Breadth");
    scanf("%d %d", &l,&b);
    area=l*b;
    peri=2*(l+b);
    if (area>peri){
        printf("The area is greater");
    } else {
        printf("Perimeter is greater");
    }
}