#include<stdio.h>
#include<conio.h>
main()
{
	float r,a;
	float area(float);
	printf("Enter radius");
	scanf("%f" ,&r);
	a=area(r);
	printf("area of circle = %f" ,a);
}
float area(float rad)
{
	return(3.14*rad*rad);
}
