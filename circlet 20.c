#include<stdio.h>
main()
{
	int r,c,a=4,b=4;
	
	for(r=1;r<=7;r++)
	{
		
		for(c=1;c<=7;c++)
	    {
	    	
	    if(c==a || c==b)
		{
			printf("*");
		}	
		else
		{
			printf(" ");
		}
		}
		a++;
		b--;
		printf("\n");	
	}
}
