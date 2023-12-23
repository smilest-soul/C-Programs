#include<stdio.h>
#include<math.h>
int main(){
    float l1,l2,g1,g2;
    scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
    float dis=3965*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("dis = %.2f",dis);
}