#include <stdio.h>
float factorial(float a)
{
	float fact=1;
	for(int i=1; i<=a; i++)
	{
		fact*=i;
	}
	return fact;
}
void main()
{
	int n;
	float i, sum=0;
	printf("ENTER THE VALUE OF RANGE(n): ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum+=(i/factorial(i));
	}
	printf("SUM = %.3f\n", sum);
}
