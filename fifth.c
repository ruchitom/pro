#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 3 no.");
	scanf("%d%d%d",&a,&b,&c);

		if(a>b&&a>c)
		{
			printf("%d  is largest",a);
		}
		else if(b>c&&b>a)
		{
			printf("%d  is largest",b);

		}
		else
		printf("%d is largest",c);
	
}
