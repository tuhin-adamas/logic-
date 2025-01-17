#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter any year ");
	scanf("%d",&a);
	if(a%400)
	{
		printf("year is leap year %d ",a);
	}
	else if(a%100!=0 && a%4==0)
	{
		printf("year is leap year %d",a);
	}
	else
	{
		printf("year is not leap year %d",a);
	}
	return 0;
}
