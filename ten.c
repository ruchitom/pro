#include<stdio.h>
void main()
{
	int n,count=0;
	printf("enter the an integer value:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		
		n=n/10;
		count++;
	}
		printf("no. of count is %d\n",count);
}
