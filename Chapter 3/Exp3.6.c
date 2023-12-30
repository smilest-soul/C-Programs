#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter ages of people");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){
        printf("a is youngest among them");
    } else if (a<b && b>c){
        printf("B is Youngest among them");
    } else {
        printf("C is Youngest");
    }
}