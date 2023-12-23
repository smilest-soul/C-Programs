    #include<stdio.h>
    int main(){
        printf("Enter the number:");
        int n,r,x=0;
        scanf("%d",&n);
        while(n!=0){
            r=n%10;
            x=x*10+r;
            n /=10;

        }
        printf("Reversed number is: %d",x);
    }