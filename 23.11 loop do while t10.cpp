#include<stdio.h>
main(){
	int a,b=1,c;
	printf("ENTER value:-");
	scanf("%i",&a);
	do{
		c=a*b;	
    	printf("%i*%i=%i\n",a,b,c);
    	b=b+1;		
	}while(b<=10);
}
