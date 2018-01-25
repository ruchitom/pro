#include<stdio.h>
void main()
{
	int n,m,i;
	printf("enter stat value\n");
	scanf("%d",&n);
	printf("enter end value\n");
	scanf("%d",&m);
	for(i=n+1;i<=m;i++)
	{
		if(i%2!=0)	
			printf("the result is %d",i);
	}
}
