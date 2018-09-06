#include<iostream>
using namespace std;
int main()
{
	cout<<"\n\t\t*** BINARY SEARCH ***\n\n";
	int n,x;
	int first,last,middle;
	cout<<" Enter no. of element in array : ";
	cin>>n;
	int ar[n];
	cout<<"\n Enter elements in an array : \n";
	for(int i=0; i<n; i++)
	{	
		cout<<" ";
		cin>>ar[i];
	}
	cout<<"\n Enter a no. to be search : ";
	cin>>x;
	cout<<"\n ";
	
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	while(first<=last)
	{
		if(ar[middle]==x)
		{
			cout<<x<<" found at "<<middle+1;
			break;
		}
		else if(ar[middle]<x)
			first = middle+1;
		else
			last = middle-1;
			middle = (first+last)/2;
	}
	if(first>last)
	cout<<"Not found! "<<x<<" is not present in the list";	
}
