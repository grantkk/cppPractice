#include <iostream>

using namespace std;

int main()
{
    const double mileTokilo = 1.609;
    double kilometer = 0.0;
    double mile = 0.0;

    cout << "This is a kelometer to mile transfer program." << endl;
    cout << "Please enter a number of miles:";
    cin >> mile;

    kilometer = mile * mileTokilo;
    cout << "Transfer to kilometer:" << kilometer << "kelometers" << endl;
}
