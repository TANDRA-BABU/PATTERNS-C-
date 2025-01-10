#include <stdio.h>
void main()
{
	int i,j,n,x;
	float sum =0;
        printf("ENTER THE VALUE OF RANGE(n): ");
	scanf("%d", &n);
	printf("ENTER THE VALUE OF x: ");
	scanf("%d", &x);
	for(i=1; i<=n; i++)
	{
		float mul=x;
		for(j=1; j<i; j++)
		{
			mul=mul*x;
		}
		if(i%2==0)
		{
			sum = sum - (mul/i);
		}
		else
		{
			sum = sum + (mul/i);
		}
	}
	printf("SUM IS: %.2f", sum);
}
