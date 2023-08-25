#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter number");// 3456->3450
	scanf("%d",&n);
	n=n/10;
	temp=n*10;
	printf("%d",temp);
	return 0;	
}
