#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a-1,c=a;
    for(int i=1;i<=a;i++){
        
       for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        b--;
        for(int j=1;j<=i;j++){
            printf("%d ",c);
        }
        c=c-1;
        printf("
");
    }
}