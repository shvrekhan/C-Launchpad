#include<iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num = 0;
	int counter = 1;
	int index = 1;
	cin>>num1;
	cin>>num2;
	while(true)
	{
		num = (3*counter)+2;
		if(index<=num1 and num%num2 !=0)
		{
			cout<<num<<endl;
			index++;
			counter++;
		}
		else if(index>num1)break;

		else counter++;
	}
	return 0;
}