#include <vector>
#include <iostream>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]
    for (int i = 0; i < v.size(); i++)

    {

        cout << v[i] << "\n";
    }

    for (auto x : v)
    {
        cout << x << "\n";
    }

    cout << v.back() << "\n"; // 2
    v.pop_back();
    cout << v.back() << "\n"; // 5


    string a = "hatti";
    string b = a + a;
    cout << b << "\n"; // hattihatti
    b[5] = 'v';
    cout << b << "\n"; // hattivatti
    string c = b.substr(3, 4);
    cout << c << "\n"; // tiva
}