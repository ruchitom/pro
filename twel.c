#include<stdio.h>
void main()
{
	int n,m,rev,rem;
	printf("enter a no.");
	scanf("%d",&n);
	n=m;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;	
	}	
		if(n==m)
			printf(" no. is palindrome",n);
		else
			printf("no. is not palindrome",n);

}
