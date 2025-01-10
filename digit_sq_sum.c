#include <stdio.h>
void main() 
{
	int i,n,sum=0;
	printf("ENTER THE VALUE OF RANGE OF NUMBERS TO FIND THEIR SQUARE FOLLOWED BY THEIR SUM: \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum = sum + (i*i);
	}
	printf("SUM IS = %d", sum);
}
