#include<stdio.h>
main()
/*
1
*/
{
	int r,c;
	
	for(r=1;r<=5;r++)//1<=5
	{
		for(c=1;c<=r;c++)//1<=5
		{
			printf("%d",r);
		}
		printf("\n");
	}
}
