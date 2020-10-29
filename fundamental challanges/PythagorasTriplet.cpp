#include<iostream>
#include<math.h>
using namespace std;
long long int even(long long int N)
{
	long long int n=0;
	long long int m=0;
	n = (N/2)*(N/2) - 1;
	m = (N/2)*(N/2) + 1;
	cout<< n << " "<< m <<endl;
	return 0;
}
long long int odd(long long int N)
{
	long long int n=0;
	long long int m=0;
	n = 2 * ((N+1)/2) * ((N-1)/2);
	m = ((N+1)/2*(N+1)/2) + ((N-1)/2*(N-1)/2);
	cout << n <<" "<< m << endl;
	return 0;
}
int main()
{
		long long int N;
		cin>>N;
		if(N==1 or N==1)cout<<-1;
		else if(N%2!=0)
		{
			odd(N);
		}
		else if(N%2 == 0)
		{
			even(N);
		}
	
	return 0;
}