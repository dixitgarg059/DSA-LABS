#include<bits/stdc++.h>
using namespace std;
int main()
{
	// inputs
	// n,k,start[n], speed[n], th
	// binary search
	// n -> number of racers
	long long int n,k,th;
	cin>>n>>k>>th;
	long long int start[n], speed[n];
	for(int i=0;i<n;i++)
		cin>>start[i];
	for(int i=0;i<n;i++)
		cin>>speed[i];
	/////////////// algorithm
	long long int l = 0, r = 1e9;
	long long int ans ;
	long long int pos[n];
	while(l<=r)
	{
		long long int mid= (l+r)/2;
		// sliding window, with taking mid at the time instant
		for(int i=0;i<n;i++)
		{
			pos[i] = start[i]+mid*speed[i];
		}
		deque <long long int> q;
		for(int i=0;i<k;i++)
		{
			if(q.empty())
			q.push_back(i);
			else
			{
				while(!q.empty()&&pos[q.back()]<=pos[i]) // popping if top of queue is less than the new element
				{
					q.pop_back();
				}
				q.push_back(i);
			}
		}
		long long int sum = 0;
		sum = pos[q.front()];
		for(int i=k;i<n;i++)
		{
			if(q.back() <= i-k)
				q.pop_front();
			if(q.empty())
			{
				q.push_back(i);
			}
			else
			{
				while(!q.empty()&&pos[q.back()]<=pos[i]) // popping if top of queue is less than the new element
				{
					q.pop_back();
				}
				q.push_back(i);
			}
			sum += pos[q.front()];
		}
		if(sum<=th)
			l = mid+1;
		else
			r = mid-1;
	}
	cout<<l<<endl;
}