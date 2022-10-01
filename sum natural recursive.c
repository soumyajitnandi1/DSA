#include<stdio.h>


int sum(int n)
{
	if(n==1)
		return 1;	
	else
		return n+sum(n-1) ;
}
int main()
{
	int n;
	printf("Enter Upper limit : ");
	scanf("%d",&n);
	printf("Sum of 1st %d natural numbers is : %d",n,sum(n));
	return 0;
}
