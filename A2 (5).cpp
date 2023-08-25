#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of the digit %d",sum);

	return 0;
}
