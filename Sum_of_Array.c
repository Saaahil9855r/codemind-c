#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int a=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        a=a+arr[i];
    }
    printf("%d",a);
}