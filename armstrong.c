#include<stdio.h>
void main()
{
	int n,m,r=0,num=0,rm,t1,t2,i;
	printf("enter a nos\n");
	scanf("%d%d",&n,&m);
	printf("Armstrong num between %d and %d are:",n,m);
	for(i=n+1;i<m;++i)
	{
		t2=i;
		t1=i;
		while(t1!=0)
		{
			t1/=10;
			++num;
		}

		while(t2!=0)
	{
		rm=t2%10;
		r+=pow(rm,num);
		t2/=10;
	}
	if(r==i)
	{
		printf("%d ",i);
	}
	num=0;
	r=0;
	}
}
