#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int num = 0;
	cin>>num;
	sum = num; 
	while(true)
	{
		
		if(sum<0)break;
		cout<<num<<endl;
		cin>>num;
		sum = sum+num;

		

	}
	return 0;
}