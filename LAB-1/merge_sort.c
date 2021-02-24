#include <stdio.h>
int temp[100005];
int count_inversions=0;
void merge_sort(int a[],int l,int r)
{

	//base cases
	if(l==r)
		return ;
	int mid=(l+r)/2;
	// step 1 : partition the array
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);

	// step 2 : merge

	int p1=l,p2=mid+1;
	int count=0;
	while(p1<=mid && p2<=r)
	{
		if(a[p1] <= a[p2])
		{
			temp[count++]=a[p1++];
		}
		else
		{
			temp[count++]=a[p2++];
			// for calculating the inversions.
			count_inversions+=mid-p1+1;
		}
	}
	while(p1<=mid)
		temp[count++]=a[p1++];
	while(p2<=r)
		temp[count++]=a[p2++];

	for(int i=l;i<=r;i++)
		a[i]=temp[i-l];

}
int main()
{
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

	printf("%d",count_inversions);
    return 0;
}