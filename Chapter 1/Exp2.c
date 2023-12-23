#include<stdio.h>
int main(){
    int n;
    printf("Enter the distance is Kms : ");
    scanf("%d",&n);
    int m,cn;
    float f,i;
    m=(n*1000);
    f=(n*3280.84);
    cn=(n*100000);
    i=(n*39370.1);
    printf("Distance in Meters :%d\n" ,m);
    printf("Distance in foot :%f\n" ,f);
    printf("Distance in Inchs :%f\n" ,i);
    printf("Distance in CentiMeters :%d\n" ,cn);

}