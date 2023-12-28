#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=a;i++){
        
        for(int j=1;j<=a;j++){
            int d=b+64;
            char c=(char)d;
            printf("%c ",d);
        }
        printf("
");
        b=b+1;
    }
}