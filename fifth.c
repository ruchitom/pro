#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 3 no.");
	scanf("%d%d%d",&a,&b,&c);

		if(a>b&&a>c)
		{
			printf("%d  is greater",a);
		}
		else if(b>c&&b>a)
		{
			printf("%d  is greater",b);

		}
		else
		printf("%d is greater",c);
	
}
