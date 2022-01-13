#include<bits/stdc++.h>
using namespace std;
int main()
{
	double sum=0;
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=1.0/(i*i);
	}
	cout<<sum<<endl;
	return 0;
}
