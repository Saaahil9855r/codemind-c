#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    float b=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        b=b+arr[i]*1.0;
    }
    printf("%.2f",b/a);
}