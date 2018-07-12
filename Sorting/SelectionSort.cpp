#include<iostream>
using namespace std;
 int main()
{
	int n;
	cout<<"Enter the no of elements in the array\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		int b=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[b]){
				b=j;
			}
		}
		int temp = a[i];
		a[i]=a[b];
		a[b]=temp;
	}


	cout<<"The Sorted array is";
	for(int i=0;i<n;i++){
		cout<<a[i]<<","; 
	}
	return 0;	
}
