#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int b=1;
        for(int j=1;j<=a;j++){
            int d=64+b;
            char c=(char)d;
            printf("%c ",d);
            b=b+1;
        }
        printf("
");
    }
}