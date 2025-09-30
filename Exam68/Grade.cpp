#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter your score : ";
    cin >> x;
    if (x >= 80)
    {
        cout << "Your Grade is : A" << endl;
    }
    else if (x >= 75)
    {
        cout << "Your Grade is : B+" << endl;
    }
    else if (x >= 70)
    {
        cout << "Your Grade is : B" << endl;
    }
    else if (x >= 65)
    {
        cout << "Your Grade is : C+" << endl;
    }
    else if (x >= 60)
    {
        cout << "Your Grade is : C" << endl;
    }
    else if (x >= 55)
    {
        cout << "Your Grade is : D+" << endl;
    }
    else if (x >= 50)
    {
        cout << "Your Grade is : D" << endl;
    }
    else if (x < 50)
    {
        cout << "Your Grade is : E" << endl;
    }
}