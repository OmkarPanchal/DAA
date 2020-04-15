#include<iostream>
using namespace std;

int arr[1<<20];
int cnt[123];
int main()
{
	int n, k;
	int res = 0;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		cnt[arr[i]%k]++;
	}
	
	if(k&1)
	{
		for(int i=1;i<=k/2;i++)
			res+=max(cnt[i],cnt[k-i]);
		if(cnt[0])res++;
	}
	else
	{
		for(int i=1;i<k/2;i++)
			res+=max(cnt[i],cnt[k-i]);
		if(cnt[0])res++;
		if(cnt[k/2])res++;
	}
	printf("%d\n",res);
	return 0;
}