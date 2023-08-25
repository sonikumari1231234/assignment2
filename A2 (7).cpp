#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter a number");
	scanf("%d",&n);
	count=n/100%10;
	printf(" is first LSB %d",count);
	return 0;
}
