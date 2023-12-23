#include<stdio.h>
#include<math.h>
int main(){
    float t,v,w;
    scanf("%f%f",&t,&v);
   // = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v0.16
    w=35.74+(0.6215*t)+((0.4275*t)-35.75)*pow(v,0.16);
    printf("wcf = %.2f",w);
}