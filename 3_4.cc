#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a=0,b=1,c=1,sum=0;
	cin>>n;
	if(n==1)
	{
		cout<<sum;
		return 0;
	}
	else if(n==2)
	{
		sum++;
		cout<<sum;
		return 0;
	}
	sum=1;
	for(i=3;i<=n;i++)
	{
		c=a+b;
		sum+=c;
		a=b;
		b=c;
	}
	cout<<sum<<endl;
	return 0;
}
