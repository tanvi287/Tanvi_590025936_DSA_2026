#include <stdio.h>

int main(){
	int i,a,c=0;; 
	printf("Enter a number: ");
	scanf("%d", &a);
	
	for(i=1;i<=a;i++){
		if(a % i == 0){
			c++;
		}
	}
	if(c==2)
	printf("The number is a prime no.: ",a);
	else
	printf("It is not a prime no. ",a);
	
	return 0;
}
