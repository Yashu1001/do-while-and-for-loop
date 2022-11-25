#include<stdio.h>
main(){
	int a=1,b;
	printf("ENTER VALUE=");
	scanf("%i",&b);
	do{
		printf("%i\n",a);
		a+=2;		
	}while(a<=b);
}
