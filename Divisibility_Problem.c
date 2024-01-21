#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a;
    for(int i=0;i>=0;i++){
        if(c%b==0){
        
        printf("%d",i);
        break;
        }
        c++;
    }
    
}