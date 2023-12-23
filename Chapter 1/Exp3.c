#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter marks of the students in five subjects :" );
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int ag,Per;
    ag=(a+b+c+d+e);
    Per=(ag*100/500);
    printf("Aggrate Marks are %d\n",ag);
    printf("Percentage is are %d\n",Per);
    printf( "total marks is 500");
}