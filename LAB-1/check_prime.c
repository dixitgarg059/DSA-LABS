#include <stdio.h>
int main()
{
	int n;scanf("%d",&n);
	int flg=0;
	for(int i=2;i*i<=n;i++)
	{
		if((n%i) ==0)
		{
			flg=1;
			break;
		}
	}
	if(!flg)
	{
		printf("%s","YES");
	}
	else
	{
		printf("%s","NO");
	}
    return 0;
}	