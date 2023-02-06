#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=0,b=0;
    cout <<"請輸入第1個數字";
    cin >> a ;
    cout <<"請輸入第2個數字";
    cin >> b ;
    if(a>b) cout << a <<"是比較大的數字!";
    if(a=b) cout <<"這兩筆是相同數字!"; // 邏輯錯誤: a = b 指的是:a等於b , (正確應為:a == b)
    else cout << b <<"是比較大的數字!";


}
