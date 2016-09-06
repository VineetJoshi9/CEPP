#include<stdio.h>

void maxdiff(int [],int);
int main()
{
	int i,n,a[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	maxdiff(a,n);
	return 0;
}

void maxdiff(int a[],int m)
{
	int md,min,i;
	min=a[0];
	md=a[1]-a[0];
	
	for(i=0;i<m;i++)
	{
		if(a[i]-min>md)
		md=a[i]-min;
		
		if(a[i]<min)
		min=a[i];
		
	}
	
	printf("%d",md);
	
}
