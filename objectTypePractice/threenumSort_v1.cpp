#include <endian.h>
#include <iostream>
#include <array>
#include <iterator>

using namespace std;

int main()
{
	array<int,3> number={0,0,0};

	cout<<"Input three numbers:";
	for(auto i =0; i <number.size(); i++)
		cin>>number[i];

	if(number[0]>number[1])
	{
		swap(number[0], number[1]);
	}
	if(number[1]>number[2])
	{
		swap(number[1],number[2]);
	}
	
	for(auto i =0; i <number.size(); i++)
	{
		if(i!=0)
		{
			cout<<", ";
		}
		cout<< number[i];
	}

	cout<<endl;
	return 0;
}
