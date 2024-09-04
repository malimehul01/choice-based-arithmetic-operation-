#include<stdio.h>
main()
{
	
	int a,b,c,d;
	
	printf("\naddition=>1");
	printf("\nsub=>2");
	printf("\nmul=>3");
	printf("\ndivison=>4");
	
	printf("\nEnter your choice=>");
	scanf("%d",&c);
	printf("Enter no1=>");
	scanf("%d",&a);
	printf("Enter no2=>");
	scanf("%d",&b);
	
	if(c==1)
	{
	 d=a+b;
	 printf("%d is ans of addition",d);
			
	}
	else if (c==2)
	{
		d=a-b;
		printf("%d is ans of sub",d);
		
		
	}
	else if (c==3)
	{
		d=a*b;
		printf("%d is ans of mul",d);
		
		
	}
	else if (c==4)
	{
		d=a/b;
		printf("%d is ans of div",d);
		
		
	}
	else
	{
		
		
		printf("enter only 1 to 4");
	}
	
	
	
}
