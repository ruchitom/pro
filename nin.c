#include<stdio.h>
void main()
{
	int N[5]={1,2,3,4,5},i,s=0,K;
	printf("enter the value of K:\n");
	scanf("%d",&K);
	for(i=0;i<K;i++)
	{
		s=s+N[i];
	}
	printf("the no. is %d",s);
}
