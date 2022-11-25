#include<stdio.h>
main(){
	int a=1,b=1,c;
	printf("ENTER Number");
	scanf("%i",&c);
	do{
		b=b*a;
		a++;
				
	}while(a<=c);
	printf("factorial of num:-%i\n",b,c);	
}
