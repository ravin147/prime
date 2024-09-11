#include<stdio.h>
int main()
{
	int i;
	printf("enter the number :");
	scanf("%d",&i);
	if(i%1==0&&i%i==0)
	{
		printf("number is prime number ");
	}
	else {
		printf("number is not a prime number ");
	}
}
