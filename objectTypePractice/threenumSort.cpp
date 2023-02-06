#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int number[3]={0,0,0};
	cout<<"Please input three nubmers:";
	for (int i=0; i<3; i++)
	{
		cin>> number[i];
	}
	sort(number,number+3);

	for (int i =0; i<3; i++)
	{
		cout<<number[i];
	}


	return 0;
}
