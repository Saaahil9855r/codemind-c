#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c=a+64;
    
    for(int i=1;i<=a;i++){
       int d=65;
        for(int j=1;j<=a+1-i;j++){
             int b=(char)d;
             
            printf("%c ",b);
               d=d+1;
        }
        printf("
");
    }
}