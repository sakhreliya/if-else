#include<stdio.h>
main()
{
	int no;
	printf("enter your number");
	scanf("%d",&no);
	if(no>0)
	{
		printf("this is natural number");
	}
	else if(no==0)
	{
		printf("this is not valid natural number");
	}
	else if(no<0)
	{
		printf("this is not natural number");
	}
}


