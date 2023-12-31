#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=3){
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                printf("*");
            }
            printf("
");
        }
        for(int i=1;i<a;i++){
            for(int k=1;k<a+1-i;k++){
                printf("*");
            }
            printf("
");
        }
    }
    else printf("The pattern is not possible");
}