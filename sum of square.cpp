#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the limt :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("the total sum is %d",sum);
}
