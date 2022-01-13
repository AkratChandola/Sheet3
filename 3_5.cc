#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 1 2 3 6 9 18 27 54 .....
	int i,n,k=3,m=0,sum=0,total=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i<=3){
			sum++;
			total+=sum;
			//cout<<sum<<" ";			
		}

		else
		{
			m++;
			sum+=k;
			total+=sum;
			//cout<<sum<<" ";
			if(m==2)
			{
				m=0;
				k=k*3;
			}
		}
	}
	cout<<total<<endl;
	return 0;
}
