#include <set>
#include <iostream>
using namespace std;
int main()
{
    set<int> r;
    r.insert(3);
    r.insert(2);
    r.insert(5);
    cout << r.count(3) << "\n"; // 1
    cout << r.count(4) << "\n"; // 0
    r.erase(3);
    r.insert(4);
    cout << r.count(3) << "\n"; // 0
    cout << r.count(4) << "\n"; // 1

    set<int> y = {2, 5, 6, 8};
    cout << y.size() << "\n"; // 4
    for (auto x : y)
    {
        cout << x << "\n";
    }

    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.count(5) << "\n"; // 3
    s.erase(s.find(5));
    cout << s.count(5) << "\n"; // 2
}
