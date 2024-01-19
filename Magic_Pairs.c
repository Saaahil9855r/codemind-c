#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if((i+j)%2!=0) c++;
        }
    }
    printf("%d",c);
}