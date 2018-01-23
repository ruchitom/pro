#include<stdio.h>
void main()
{
 int s=0,n,i;
 printf("enter a no.");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	s+=i;
 }
 printf("%d",s);
}
