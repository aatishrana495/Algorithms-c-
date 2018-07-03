#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the no of elemnts in the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array\n";
	int a[n];
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	
	for(int i=0;i<n;i++)
	{	
		int temp=a[i];
		int j=i-1;
		while(j>=0 &&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}

	cout<<"The sorted array is: \n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}

}
