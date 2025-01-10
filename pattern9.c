#include <stdio.h>
void main()
{
	int i,n,x,j,sum=0;
	printf("ENTER THE VALUE OF RANGE(n) OF NUMBERS: \n");
	scanf("%d", &n);
	printf("ENTER THE VALUE OF x: \n");
	scanf("%d", &x);
	for(i=1; i<=n; i++)
	{
		int mul=x;
		for(j=1; j<i; j++)
		{
			mul = mul * x;
		}
		if(i % 2 == 0)
		{
			sum = sum - (i*mul);
		}
		else
		{
			sum = sum + (i*mul);
		}
	}
	printf("SUM = %d", sum);
}
