#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int sum=0;
	for(int i=1; i<=n; ++i)
	{
		sum=sum+(i*i);
		printf("SUM OF SQUARES OF FIRST %d NATURAL NUMBERS: %d\n", n, sum);
		return 0;
	}
}
