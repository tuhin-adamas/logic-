#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter your value:");
	scanf("%d",&a);
	printf("enter your value :");
	scanf("%d",&b);
	printf("enter your value");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a is the  biggest number:");
	}
    else if(b>a&&b>c)
    {
    	printf("b is the  biggest number");
	}
    else
    {
    	printf("c is the  biggest number");
	}
getch();
return 0;


}

