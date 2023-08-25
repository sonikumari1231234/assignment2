#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap value without using third variable  %d %d",a,b);
	return 0;
}
