#include<stdio.h>
int main()
{
	char v;
	printf("enter a character:\n");
	scanf("%c",&v);
	if(v=='a'||v=='e'||v=='o'||v=='i'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
	{
		printf("vowel");
	}
	else
	printf("consonants");
}

