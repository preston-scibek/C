#include <stdio.h>
#include <stdlib.h>
	struct Complex{
		double re;
		double im;
	};
	
struct Complex add(struct Complex a, struct Complex b){
	printf("Enter real part");
	scanf("%lf", &a.re);
	printf("Enter imaginary part");
	scanf("%lf", &a.im);
	printf("Current total is %lf+%lfi", a.re, a.im);
	printf("Enter real part");
	scanf("%lf", &b.re);
	printf("Enter imaginary part");
	scanf("%lf", &b.im);
	printf("Current total is %lf+%lfi", b.re, b.im);
	struct Complex c;
	c.re = a.re+b.re;
	c.im = a.im+b.im;
	printf("The answer is %lf+%lfi", c.re, c.im);
	return;
	
}
struct Complex multiply(struct Complex a, struct Complex b){
	printf("Enter real part");
	scanf("%lf", &a.re);
	printf("Enter imaginary part");
	scanf("%lf", &a.im);
	printf("Current total is %lf+%lfi", a.re, a.im);
	printf("Enter real part");
	scanf("%lf", &b.re);
	printf("Enter imaginary part");
	scanf("%lf", &b.im);
	printf("Current total is %lf+%lfi", b.re, b.im);
	struct Complex c;
	c.re = (a.re*b.re)-(a.im*b.im);
	c.im = (a.re*b.im)+(a.im*b.re);
	printf("The answer is %lf+%lfi", c.re, c.im);
	return;
}
struct Complex scale(struct Complex a, double factor){
	printf("Enter real part");
	scanf("%lf", &a.re);
	printf("Enter imaginary part");
	scanf("%lf", &a.im);
	printf("Enter scalar");
	scanf("%lf", &factor);
	struct Complex c;
	c.re = (factor*a.re);
	c.im = (factor*a.im);
	printf("The answer is %lf+%lfi", c.re, c.im);
	return;
}
struct Complex subtract(struct Complex a, struct Complex b, double factor){
	printf("Enter real part");
	scanf("%lf", &a.re);
	printf("Enter imaginary part");
	scanf("%lf", &a.im);
	printf("Enter real part");
	scanf("%lf", &b.re);
	printf("Enter imaginary part");
	scanf("%lf", &b.im);
	struct Complex c;
	b.re = (factor*b.re);
	b.im = (factor*b.im);
	c.re = (a.re+b.re);
	c.im = (a.im+b.im);
	printf("The answer is %lf+%lfi", c.re, c.im);
	return;
}
int main(void){

	int choice;
	struct Complex a;
	struct Complex b;
	double factor;
	printf("Do you want to: \n (0) End \n (1) Add \n (2) Subtract \n (3) Multiply \n");
	scanf("%d", &choice);
	while(choice!=0){
		if(choice==1){
			add(a, b);
		}
		if(choice==2){
			subtract(a, b, -1);
			
		}
		if(choice==3){
			multiply(a, b);
		}
		printf("Do you want to: \n (0) End \n (1) Add \n (2) Subtract \n (3) Multiply \n");
		scanf("%d", &choice);
	}
}