#include<stdio.h>
int main()
{
	int n,i,index,m=0,a[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a[a[i]%n]+=n;
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]/n>m)
		{
		m=a[i]/n;
		index=i;
		}
	}
	
	printf("%d",index);
	return 0;
}
