#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        
        for(int k=1;k<a-i+1;k++){
            printf(" ");
        }
        for(int j=a-i+1;j<=a;j++){
            printf("%d ",j);
          
        }
        printf("
");
    }
}