#include<stdio.h>

int ab(int);
int main()
{
	int i,f,n,a[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	f=0;
	for(i=0;i<n;i++)
	{
		if(a[ab(a[i])]>0 && a[ab(a[i])]!=999)
		{
			a[ab(a[i])]=a[ab(a[i])]*(-1);
		}
		else if(a[ab(a[i])]<0 || a[ab(a[i])]==999)
		{
			printf("Yes");
			f=1;
			break;
		}
		else
		{
			a[abs(a[i])]=999;
		}
	
	}
	
		if(f==0)
		printf("No");
		return 0;
}


int ab(int x)
{
	
	return (x>0)? x: x*(-1); 
	
}
