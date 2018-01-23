#include<stdio.h>
int main()
{
	char v;
	printf("enter a character:\n");
	scanf("%c",&v);
	 if((v>='a'&&v<='z')||(v>='A'&&v<='Z'))
	{
		printf("Alphabet");
	}
	else
	printf("No");
}
