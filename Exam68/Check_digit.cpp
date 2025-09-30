#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cout << "Enter a number : "<< endl;
    //cin >> x;
    //x = 12;
    //x = -35;
    x = 0;
    cout << x << endl;
    if (x == 0)
        cout << "Zero" << endl;
    else if (x > 0)
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;

    if (x % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}