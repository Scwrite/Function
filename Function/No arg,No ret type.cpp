// No argument No return type

#include<stdio.h>
 void calculate(void);    //Diclration   //function,function name and No argument
 main()
 {
 	calculate();      // Calling
 }
 void calculate()
 {
 	float p,r,t,si;     		// Called and Defination
 	printf("Enter the Principle,Rate,Time");
 	scanf("%f%f%f" ,&p,&r,&t);
 	si=(p*r*t)/100;
	printf("The simple interest of given value is= %f" ,si);
}
