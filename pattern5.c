#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=1; i<=4; i++)
	{
		for (j=1; j<=4-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	for(i=3; i>=1; i--)
	{
		for(j=1; j<=4-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
