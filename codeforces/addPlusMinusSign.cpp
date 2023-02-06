// codeforces: 1774A - Add Plus Minus Sign
// https://codeforces.com/problemset/problem/1774/A
#include <iostream>

using namespace std;

// produce operator according a string number 'a' with length 'num'
// produce operator "-": if the sum  and the next digit are all '1'
// produce operator "+": other conditions besides the rule
void produceOper(int num, string a)
{
    int total = a[0] - '0'; // transfer 'char' to 'int' according ascii code

    for (auto i = 1; i < num; i++)
    {
        if (total == 1 && a[i] == '1') // produce operator "-": if the sum  and the next digit are all '1'
        {                              // otherwise, produce operator "+"
            cout << "-";
            total = 0;
        }
        else
        {
            cout << "+";
            total = total + int(a[i] - '0');
        }
    }
    cout << endl;
}

int main()
{
    int numbers = 0; // the number of test cases
    int num[2000];   // the length  of string 'a'
    string a[2000];  // test case: contain a string 'a'
    cin >> numbers;

    for (auto i = 0; i < numbers; i++) // read all test cases's data
    {
        cin >> num[i]; // the case's length
        cin >> a[i];   // the case's string
    }

    for (auto i = 0; i < numbers; i++)
    {
        produceOper(num[i], a[i]); // produceOper one case by one case
    }

    return 0;
}
