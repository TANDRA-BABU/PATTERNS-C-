#include <stdio.h>

/*
int main()
{
	int i,j,k;
	for(i=0; i<4; ++i)
	{
		for(j=0; j<4-i; j++)
		{
			printf(" ");
		}
		for(i=1; i<=4; i++)
		{
			for(j=1; j<=(2*i)-1; j++)
			{
				printf(" * ",k);
			}
			for(k=1; k<=4-i; k++)
			{
				printf(" ");
			}
			printf(" ");
			printf("\n");
		}
		printf("\n");
	}
}
*/

int main() {
	int n = 4;
	for (int i = 0; i < n; ++i)
       	{
		for (int j = 0; j < n-i-1; ++j) 
		{
			printf(" ");
		}
		for (int j = 0; j < i+1; ++j) 
		{
			printf("*");
		}
		for (int j = 0; j < i; ++j) 
		{
			printf("*");
		}
		printf("\n");
	}
}
