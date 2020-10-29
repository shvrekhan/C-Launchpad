#include<iostream>
using namespace std;
int main()
{
	int lowerBound = 0;
	int UpperBound = 0;
	int jump = 0;
	cin>>lowerBound;
	cin>>UpperBound;
	cin>>jump;

	for(int i=lowerBound ; i <= UpperBound ; i = i+jump )
	{
		cout<<i<<" "<<(5*i - 5*32)/9<<endl;
	}

	return 0;
}