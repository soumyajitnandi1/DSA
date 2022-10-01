#include<stdio.h>
int main()
{
	int x,i=0;
	printf("Enter a number : ");
	scanf("%d",&x);
	if ((x & (1<<i))==(1<<i))
		printf("ODD");
	else 
		printf("EVEN");
	return 0;
}
