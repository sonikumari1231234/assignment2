#include<stdio.h>
int main()
{
	int n ,n1,n2,temp;
	printf("Enter number");
	scanf("%d",&n);
	n1=n/10;
	n2=n%10;
	temp=n2*100+n1;
	printf("%d",temp);
	return 0;
}
