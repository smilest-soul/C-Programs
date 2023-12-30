#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter the Selling price and Cost Price :");
    int s,c,b,a;
    scanf("%d %d",&c,&s);
    if(c>s){
        b=c-s;
        printf("Its Profit , The Amount is: %d",b);

    }else {
        a=s-c;
        printf("its a Loss ,The amount is: %d",a);
    }
}