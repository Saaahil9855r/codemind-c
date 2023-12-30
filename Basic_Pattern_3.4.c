#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c=a+64;
    for(int i=1;i<=a;i++){
        int b=(char)c;
        for(int j=1;j<=a+1-i;j++){
            printf("%c ",b);
        }
        c=c-1;
        printf("
");
    }
}