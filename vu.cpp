#ok
#include<stdio.h>
void fu(int,int);
int main()
{
	char x=67,y='C';
	fu(x,y);
	return 0;
	
}
void fu(int x,int y)
{
	printf("%d,%d",x,y);
}
