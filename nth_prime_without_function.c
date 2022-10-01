#include<stdio.h>
#include<time.h>


int main()
{
	
	int n,i=3,p=1,j,s;
	printf("Enter Serial No : ");
	scanf("%d",&n);
	if(n==1)
		i=4;
	long t2,t1=clock();
	while(p!=n)
	{
		for(j=3,s=1;(j*j)<=i;j+=2)
		{
			if(!(i%j))
			{
				s=0;
				break;
			}
		}
		if(s)
			p++;
		i+=2;
	}

	t2=clock();
	printf("%dth prime no = %d",n,i-2);
	printf("\nTime taken : %lf ",(double) (t2-t1)/CLOCKS_PER_SEC);
	return 0;
}
	
	
