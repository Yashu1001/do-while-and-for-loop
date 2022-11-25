#include<stdio.h>
main(){
	int a=1,sum=0,n;
	printf("ENTER value");
	scanf("%i",&n);
	do{
		sum=sum+a;
		a++;
		
	}while(a<=n);		
	printf("SUM:-%i",sum);	
}
