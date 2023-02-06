// calcular the smaller, larger,sum , difference, product, ratio  of two numbers
#include <iostream>

using namespace std;

int main()
{
    double number1 = 0;
    double number2 = 0;

    cout << "Please input two numbers," << endl;
    cout << "first number:";
    cin >> number1;
    cout << "second number:";
    cin >> number2;

    cout << "The smaller number is :" << ((number1 < number2) ? number1 : number2) << endl;

    cout << "The larger number is :" << ((number1 > number2) ? number1 : number2) << endl;

    cout << "The num is :" << (number1 + number2) << endl;

    cout << "The difference is :" << abs(number1 - number2) << endl;

    cout << "The product is :" << (number1 * number2) << endl;

    cout << "The ratio is :" << ((double)number1 / (double)number2) << endl;

    return 0;
}
