#include<iostream>
using namespace std;
void sum(int n)
{
	int odd = 0;
	int even = 0;
	int temp = 0;
	while(n>0)
	{
		temp = n%10;
		if(temp%2==0)even=even+temp;
		else odd = odd+temp;

		n=n/10;
	}
	if(odd%3==0)cout<<"Yes"<<endl;
	else if(even%4==0)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int d = 0;
		cin>>d;
		sum(d); 
	}
}