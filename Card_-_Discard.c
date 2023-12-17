#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=52%a;
    int c=52/a;
    if(b==0){
        printf("%d",b);
    }
    else if(b!=0){
        printf("%d",52-(c*a));
    }
}