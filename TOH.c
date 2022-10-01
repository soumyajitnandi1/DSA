 #include<stdio.h>
 
 
 void TOH(int x,int s,int a,int d)
 {
 	if(x==1)
 		printf("Move the top most disk from %d to %d .\n",s,d);
 	else
 		{
 			TOH(x-1,s,d,a);
 			TOH(1,s,a,d);
 			TOH(x-1,a,s,d);
		}
 }
 int main()
 {
 	int n, src,aux,dst;
 	printf("Enter number of disks : ");
 	scanf("%d",&n);
 	printf("Enter Source between 1-3 : ");
 	scanf("%d",&src);
 	printf("Enter Destination between 1-3 : ");
 	scanf("%d",&dst);
 	aux=6-src-dst;
 	TOH(n,src,aux,dst);
 	return 0;
 }
