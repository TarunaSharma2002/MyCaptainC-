#include<bits/stdc++.h>
using namespace std;

int main()
{
	int age;
	cout<<"Enter the age of the candidate: ";
	cin>>age;
	
	if(age>=18)
	{
		if(age==18)
		{
			cout<<"Hello young voter! You are absolutely eligible to vote :) ";
		}
		else
		{
			cout<<"You are eligible to vote :) ";
		}
	}
	else if(age==17)
	{
		cout<<"Sorry! You have to wait for one more year to vote :) ";
	}
	else
	{
		cout<<"You are not eligible to vote :)";
	}
	return 0;
}
