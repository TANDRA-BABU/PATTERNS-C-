#include <stdio.h>
int main()
{
	int row=5;
	for(int i=1; i<=row; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			printf("%c", 'A'+i-1);
		}
		printf("\n");
	}
	return 0;
}
