#include<stdio.h>
void main()
{
int a,b,i,j,c;
printf("enter the intervals");
scanf("%d%d",&a,&b);
printf("prime no. between %d and %d are:",a,b);
for(j=a+1;j<b;j++)
{
	c=0;
	for(i=2;i<=j/2;i++)
	{
	if((j%i)==0)
	{
		c++;
		break;
	}
	}
	if(c==0)	
		printf("%d ",j);			
			
}

}

