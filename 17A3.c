#include<stdio.h>
void main(){
	 
	int a,b;
	printf("enter two number:");
	scanf("%d %d",&a,&b);
	
	int *x=&a,*y=&b;
	
	printf("sum=%d",(*x+*y));
	
	
}
