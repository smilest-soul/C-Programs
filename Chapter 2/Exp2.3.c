#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,p;
    printf("Enter the sides of the triangles");
    scanf("%d %d %d",&a,&b,&c);
    float s;
    s=(a+b+c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the trinagle is :%d",p);

}