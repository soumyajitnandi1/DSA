#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i=0,j;
	while(scanf("%d",&a[i]))
	{
		i++;
		if(getchar()=='\n')
		break;
	
	}
	for(j=0;j<i;j++)
	printf("%d",a[j]);
	return 0;
}
