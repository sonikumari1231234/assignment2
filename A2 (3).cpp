#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("swap values of two int variables %d %d",a,b);
	return 0;
}
