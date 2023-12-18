#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d",&a,&b);
    while(n!=0){
        n=a%b;
        a=b;
        b=n;
    }
    printf("%d",a);
}