#include <stdio.h>

int main(){
	int a,b,t;
	printf("Enter two numbers: ");
	scanf("%d %d", &a,&b);
	
	t=a;
	a=b;
	b=t;
	
	printf("Numbers after swapping are:\n ");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}
