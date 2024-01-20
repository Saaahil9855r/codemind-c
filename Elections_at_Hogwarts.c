#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=40&&a>b&&a>c) printf("Gryffindor");
    else if(b>=40&&b>a&&b>c) printf("Slytherin");
    else if(c>=40&&c>a&&c>b) printf("Hufflepuff");
    else printf("NOTA");

}