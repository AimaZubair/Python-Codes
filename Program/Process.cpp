#include<iostream>
using namespace std;
int main()
{
	int A[5]={0};
	int B[5]={0};
	int T[4]={0};
	int W[4]={0};
	cout<<"Enter Arrival time";
	for(int i=0;i<4;i++)
	{
		cin>>A[i];
	}
		cout<<"Enter Burst time";
	for(int i=1;i<5;i++){
		cin>>B[i];  
	}
	for(int i=0;i<4;i++)
	{
	B[i+1]=B[i+1]+B[(i+1)-1];
	T[i]=B[i+1]-A[i];
	W[i]=B[i]-i;
}
	for(int i=0;i<4;i++)
	{
		cout<<"Tutnaround Time";
		cout<<T[i]<<endl;}
		for(int i=0;i<4;i++){
		cout<<"Waiting time"<<endl;
		cout<<W[i];
	}
}
