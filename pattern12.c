#include <stdio.h>
int main()
{
	int i,j,k,l,m;
	for(i=1; i<=7; i++)
	{
		char ch='A';
		for(j=7; j>=i; j--)
		{
			printf("%c", ch);
		 	ch++;
		}
		for(k=1; k<i; k++)
		{
			printf(" ");
		}
		for(l=2; l<i; l++)
		{
			printf(" ");
		}
		if(i==1)
		{
			ch=ch-2;
			for(m=6; m>=i; m--)
			{
				printf("%c",ch);
				ch--;
			}	
		}
		else
		{
			ch--;
			for(m=7; m>=i; m--)
			{
				printf("%c", ch);
				ch--;
			}
		}
		printf("\n");
	}
}
