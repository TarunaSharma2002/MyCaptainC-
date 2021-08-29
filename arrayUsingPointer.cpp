#include <iostream>
using namespace std; 
int main()
{
	int *p;
	int arr[4]; 
	cout<<"Enter elements: ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	p = arr; 
	cout<<"You've entered: ";
	for(int i=0; i<5;i++)
	{
		cout<<*p<<endl; 
		p++; 
	}		
return 0; 
}
