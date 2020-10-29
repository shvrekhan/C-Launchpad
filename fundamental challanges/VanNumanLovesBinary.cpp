#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int d;
		cin>>d;
		int number=0;
		int temp=0;
		int counter =0;
		while(d>0)
		{
			temp = d%10;
			if(temp == 1)
			{
				number = number + pow(2,counter);
			}
			counter++;
			d = d/10;
		}
		cout<<number<<endl;
		
	}

}