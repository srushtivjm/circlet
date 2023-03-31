#include<stdio.h>
main()
{
	int r,c;
	
	for(r=5;r>=1;r--)//1>=1
	{
		for(c=1;c<=r;c++)//1>=1
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
