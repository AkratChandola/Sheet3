#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum+=j;
		}
	}
	cout<<sum<<endl;
	return 0;
}
