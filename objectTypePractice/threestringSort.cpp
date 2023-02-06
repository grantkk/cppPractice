#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string strin;
	vector<string> str ;

	for ( auto i =0;i<3; i++)
	{
		cin>>strin;
		str.push_back(strin);
	}

	for (auto i =0; i< str.size(); i++)
	{
		if(i != 0)
		{
			cout<<" ,";
		}
		cout<<str[i];
	}
	return 0;
}
