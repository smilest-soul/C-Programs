#include<stdio.h>
int main(){
    int a,b,c;
    a=1189;
    b=841;
    printf("A0 is %d x %d \n",a,b);
    for(int i=1;i<9;i++){
        c=a;
        a=b;
        b=c/2;
        
        printf("A%d is %d x %d \n",i,a,b);

    }

}
