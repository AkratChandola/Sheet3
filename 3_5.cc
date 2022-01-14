#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 1 2 3 6 9 18 27 54 .....
	int i,n,k=0,m=1,sum=1,total=1;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(m==3)
		{
			m=1;
			k++;
		}
		sum=sum+pow(3,k);
		m++;
		total=total+sum;
	}
	cout<<total<<endl;
	return 0;
}
