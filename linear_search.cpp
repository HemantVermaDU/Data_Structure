#include<iostream>
using namespace std;

int main()
{
	int n;
	int pos;
	int flag =0;
	int ar[n];
	int val;
	
	cout<<"\n Enter a size of an element in array : ";
	cin>>n;
	
	cout<<"\n Enter elements in an array : ";
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	
	cout<<"\n Enter a number to be search in array : ";
	cin>> val;
	for(int i=0; i<n; i++)
	{
		if(ar[i]==val)
		{
			flag=1;
			pos = i+1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\n Number not found !";
	}
		else
		{
			cout<<" "<<val<<" Found at "<<pos;
		}
	return 0;
}
