#include<stdio.h>
void main()
{
	int n,m,r=0,rm;
	printf("enter a no.");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		rm=m%10;
		r+=rm*rm*rm;
		m/=10;
	}
	if(r==n)
		printf("Yes");
	else
		printf("no");

}
