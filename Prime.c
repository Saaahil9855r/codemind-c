#include<stdio.h>
int main(){
    int k,c=0;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        if(k%i==0) c=c+1;
    }
    if(c==2) printf("Prime");
    else printf("Not Prime");
}