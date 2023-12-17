#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=23-a;
    int d=60-b;
    int e=(c*60)+d;
    if(c==0) printf("%d",d);
    
    else if(c!=0){
        
        printf("%d",e);
    }
}