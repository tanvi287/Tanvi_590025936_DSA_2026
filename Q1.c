#include <stdio.h>
int main(){
	int a,digit,rev=0;
	printf("enter a number: ");
	scanf("%d", &a);
	while(a!=0){
	
	digit=a%10;
	rev=(rev*10)+digit;
	a=a/10;
}

	printf("The number after reversing is: %d", rev);
	return 0;
}
