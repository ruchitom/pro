#include<stdio.h>
void main()
{
	int n,m=0,i,flag=0;
	printf("enter a no.");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i)
		{
			printf("no. is not prime");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("no. is prime");
	}
	
}
