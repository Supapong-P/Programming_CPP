#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 3, 5, 7, 9}; // Example values
    int x = 4; // Example value

    auto it_find = s.find(x);
    if (it_find == s.end())
    {
        // x is not found
    }

    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        cout << *it << "\n";
    }
    else if (it == s.end())
    {
        --it;
        cout << *it << "\n";
    }
    else
    {
        int a = *it;
        --it;
        int b = *it;
        if (x - b < a - x)
            cout << b << "\n";
        else
            cout << a << "\n";
    }
}