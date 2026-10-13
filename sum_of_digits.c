#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int sum=0;
	
	scanf("%d",&n);
	n=abs(n);
	while(n>0){
		int digit=n%10;
		sum=sum+digit;
		n=n/10;
		
	}
	printf("%d\n",sum);
	return 0;
}
