#include<stdio.h>
int addition();

void main()
{ 
	int add;
	add=addition();
	printf("addition=%d" ,add);
}
int addition()

{
	int a,b;
	printf("Enter the numbers");
	scanf("%d%d" ,&a,&b);
	return(a+b);
}
