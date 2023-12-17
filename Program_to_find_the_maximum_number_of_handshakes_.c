#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int max=(number*(number-1))/2;
    printf("%d",max);
}