#include<bits/stdc++.h>
using namespace std;


int primeSum(int n)
{
	int prime=1;
	if(n==0 || n==1)
	{
		prime=0;
	}
	else
	{
		for(int i=2; i<=n/2; ++i)
		{
			if(n%i==0)
			{
				prime=0;
				break;
			}
		}
	}	
	return prime;
}


int main()
{
	int n, flag=0;;
	cout<<"Enter a positive integer: ";
	cin>>n;
	for(int i=2; i<=n/2; ++i)
	{
		if(primeSum(i)==1)
		{
			if(primeSum(n-i)==1)
			{
				cout<<n<<"="<<i<<"+"<<n-i<<endl;
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		cout<<n<<" cannot be expressed as the Sum of Two Prime Numbers.";
	}
	return 0;
}
