/* 數字比大小 
   想法步驟:
    1.輸入第1個數字a
    2.輸入第2個數字b
    3.如果( a>b ):
        顯示: a是比較大的數字
      否則-如果 ( a == b ):
        顯示: 這兩筆是相同數字
      否則 :
        顠示: b是比較大的數字
 
*/
#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;

    cin >> number1;
    cin >> number2;
   
    if(number1 > number2)
        cout << "number1 是比較大的數字" <<endl;
    else if( number1 == number2)
        cout << "這兩筆是相同數字"<<endl;
    else
        cout <<"b是比較大的數字"<<endl;

}
