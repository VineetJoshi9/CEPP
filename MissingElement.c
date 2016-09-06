#include<stdio.h>

int main()
{
	int i,n,s=0,orisum,a[100],e;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	
	orisum=((n+2)*(1+n))/2;
	e=orisum-s;

	printf("%d",e);
	return 0;
}
