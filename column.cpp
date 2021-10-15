#include<iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N1,N2;
		cin>>N1>>N2;
		int a[N1],b[N2];
		int sum1=0,sum2=0;
		for(int j=0;j<N1;j++)
		{
			cin>>a[j];
			sum1=sum1+ a[j];
		}
			for(int j=0;j<N1;j++)
		{
			cin>>b[j];
			sum2=sum2+ b[j];
		}
		
		if(sum1>sum2)
		{
			cout<<"C1"<<endl;
		}
		else
		cout<<"C2"<<endl;
	}
}
