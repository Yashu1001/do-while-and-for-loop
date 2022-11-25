#include<stdio.h>
main(){
	int a,b=1,c;
	printf("ENTER VALUE=");
	scanf("%i",&a);
	for(b=1;b<=10;b++){
		if(c=a*b){
			printf("%i*%i=%i\n",a,b,c);
		}		
	}	
}
