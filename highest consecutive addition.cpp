#include<iostream>
using namespace std;
int main()
{
	int k, sum, max=0;
	int a[5]={2,7,9,8,3};
	int i, j;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cin>>k;
	for(i=0;i<5-k;i++)
	{
		sum=0;
		for(j=i;j<i+k;j++)
		{
			sum=sum+a[j];
		}
		if(sum>=max)
		{
			max=sum;
		}
	}
	cout<<max;
}
