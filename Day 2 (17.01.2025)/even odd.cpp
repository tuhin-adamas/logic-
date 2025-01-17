#include<stdio.h>
int main()
{
	int a;
	printf("enter your number to find even or odd :");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("given numbefr is even no %d",a);
	}
	else{
		printf("given no is odd no %d",a); 
	}
	return 0;
}
