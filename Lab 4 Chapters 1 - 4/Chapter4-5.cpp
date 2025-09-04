#include <iostream>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a & b) << "\n"; // 0010010000
    cout << (a | b) << "\n"; // 1011111110
    cout << (a ^ b) << "\n"; // 1001101110

    deque<int> d;
    d.push_back(5);  // [5]
    d.push_back(2);  // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back();    // [3,5]
    d.pop_front();   // [5]

    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    cout << s.top(); // 5
    s.pop();
    cout << s.top(); // 2

   queue<int> q1;
    q1.push(3);
    q1.push(2);
    q1.push(5);
    cout << q1.front(); // 3
    q1.pop();
    cout << q1.front(); // 2

    priority_queue<int> q2;
    q2.push(3);
    q2.push(5);
    q2.push(7);
    q2.push(2);
    cout << q2.top() << "\n"; // 7
    q2.pop();
    cout << q2.top() << "\n"; // 5
    q2.pop();
    q2.push(6);
    cout << q2.top() << "\n"; // 6
    q2.pop();

}