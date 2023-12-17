#include<stdio.h>
int main(){
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int a=l*b;
    int A=(l+(2*w))*(b+(2*w));
    int e=A-a;
    printf("%d",e*c);
}