#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=500-(a*2);
    int d=1000-((a+b)*4);
    int e=1000-b*4;
    int f=500-(a+b)*2;
    if(c+d<e+f) printf("%d",e+f);
    else printf("%d",c+d);
}