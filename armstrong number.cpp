#include<iostream>
using namespace std;
int main()
{
	int n,s=0,rem,c;
	cout<<"Enter your number please = ";
	cin>>n;
	c=n;
	while(n!=0)
	{
		rem=n%10;
		s=s+rem*rem*rem;
		n=n/10;
	}
	if(s==c)
	{
		cout<<"Your Number is armstrong";
	}
	else
	{
		cout<<"Your Number is Not armstrong";
	}
	return 0;
	
}
