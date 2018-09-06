#include<iostream>
using namespace std;
int main()
{
	cout<<"\n\t\t*** INSERTION SORT ***\n";
	int n;
	cout<<"\n Enter no. of elements in array : ";
	cin>>n;
	
	int arr[n];
	cout<<"\n Enter an element in array :\n";
	for(int i=0; i<n; i++)
	{
		cout<<" ";
		cin>>arr[i];
	}

	for(int i=1; i<=n-1; i++)
	{
		int j=i;
		int temp=arr[j];
		while(j>0 && temp<arr[j-1])
		{
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j=j-1;
		}
	}
	cout<<"\n Sorted list in ascending order : \n";
	for(int i=0; i<=n-1;i++)
	{
		cout<<" ";
		cout<<arr[i]<<"\n";
	}
}
