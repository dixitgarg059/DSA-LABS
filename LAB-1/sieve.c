#include <stdio.h>
int main()
{
	int n;scanf("%d",&n);
	int dlt[n+1];
	for(int i=0;i<=n;i++)
	{
		dlt[i]=0;
	}
	for(int i=2;i<=n;i++)
	{
		if(dlt[i])
			continue;
		for(int j=2*i;j<=n;j+=i)
		{
			dlt[j]=1;	
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(dlt[i]==0)
			printf("%d ",i);
	}
    return 0;
}