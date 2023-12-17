#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int c=0,b=0;
    for(int i=a;i>0;i--){
        c=c+(i*i);
        b=b+i;
    }
    int d=pow(b,2);
    printf("%d",d-c);
}