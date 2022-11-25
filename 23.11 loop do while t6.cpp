#include<stdio.h>
main(){
	int a,b=1;
	printf("ENTER VALUE=");
	scanf("%i",&a);
	do{
		printf("%i\n",a);
		a-=2;		
	}
	while(a>=b);	
}
