#include <iostream>

using namespace std;

// produce operator according a string number 'a' with length 'num'
// produce operator "-": if the sum  and the next digit are all '1'
// produce operator "+": other conditions besides the rule
void produceOper(int num, string a)
{
	int total =a[0]-'0'; // transfer 'char' to 'int' according ascii code 
				 
	for(auto i =1;i<num;i++)
	{
		if(total==1 && a[i] == '1')
		{
			cout<<"-";
			total = 0;
		}
		else
		{
			cout<<"+";
			total = total + int(a[i]-'0');
		}
	}
	cout<<endl;

}

int main()
{
    int numbers = 0;
    int num[2000];
    string a[2000];
    cin >> numbers;

    for (auto i = 0; i < numbers; i++)
    {
        cin >> num[i];
        cin >> a[i];
    }

	for (auto i =0; i <numbers; i++)
	{
		produceOper(num[i], a[i]);
	}

    return 0;
}
