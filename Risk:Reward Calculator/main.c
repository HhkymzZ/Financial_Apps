#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculate(float a,float b,float c,float d){
	
	float cap;    // ((100/leverage)*1R) / positions stoploss percent
	
	float r;
	r= (a*d)/100;
	cap = ((100/b)*r)/c ; 
	
	return cap;
	
}

int main() {
	
	float pos_cap,a,b,c,d;
	
	printf("Enter Your Capital: ");
	scanf("%f",&a);
	printf("Enter your Leverage: ");
	scanf("%f",&b);
	printf("Enter the stop loss as a percentage: ");
	scanf("%f",&c);
	printf("Enter your maximum capital risk: ");
	scanf("%f",&d);
	if(b*c>100){
		
		printf("---------------------------------------------------------\n");
		printf("if your trade type is isolated you can liq before stoploss\n");
		printf("-----------------------------------------------------------");
		printf("\n");
		
	}
	
	pos_cap = calculate(a,b,c,d);
	printf("%f",pos_cap);
	return 0;
}
