#include<stdio.h>

main()
{
	char *p;
	char data[1000];
	

	
	p = fopen("Fill.txt","r");
	
	if( p == 0 )
	{
		printf("Fill not open");
	}
	else
	{
		while(fgets(data,15,p) !=NULL)
		{
			puts(data);
		}
	}

}

