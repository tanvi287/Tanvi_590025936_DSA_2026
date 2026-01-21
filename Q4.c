#include<stdio.h>

int fac(int a){
if(a==1){
return 1;
}else{
return a*fac(a-1);
}
}

int main(){
int n;
printf("ENTER THE NUMBER\n");
scanf("%d",&n);
n=fac(n);
printf("FACTORIAL:%d",n);
return 0;
}
