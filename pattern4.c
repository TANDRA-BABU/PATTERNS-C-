#include <stdio.h>
int main()
{
	    int i,j,row=6;
	    for(i=1; i<=row/2; ++i)
	    {
                 for(j=1; j<=i; ++j)
		 {
	           printf("%d",j);
	         }
	           printf("\n");
	     }
	    for(i=row/2+1; i>=1; --i)
	    {
	         for (j=1; j<=i; ++j)
	        {         
		   printf("%d",j);
		 }
		 printf("\n");
	    }
}

	                                                                                                                                       
