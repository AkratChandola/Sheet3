#include<bits/stdc++.h>
using namespace std;
int fact(int i)
{
	int fact=1;
	while(i>=2)
	{
		fact*=i;
		i--;
	}
	return fact;
}
int main()
{
	double sum=1.0;
	int i,k=-1,n,x;
	cout<<"Enter 'n' followed by 'x'"<<endl;
	cin>>n;
	cin>>x;
	for(i=2;i<2*n;i+=2)
	{
		sum+=k*(pow(x,i)/fact(i));
		k*=-1;
	}
	cout<<sum<<endl;
	return 0;
}
