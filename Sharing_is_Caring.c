#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=(b*(b+1)/2);
    if(c<=a) printf("YES");
    else printf("NO");
}