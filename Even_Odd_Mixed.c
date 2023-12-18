#include<stdio.h>
int main(){
    int a,b,c,d=0,e=0,f=0;
	scanf("%lld",&a);
	
	c=0;
	while(a!=0){
		b=a%10;
		if(b%2==0){
			d++;
		}
		else{
			e++;
		}
		a=a/10;
		f++;
	}
	
	if(d==f){
		printf("Even");
	}
	else if(e==f){
		printf("Odd");
	}
	else {
		printf("Mixed");
	}
}