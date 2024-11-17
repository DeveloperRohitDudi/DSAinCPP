// queue data structure
// push, pop, swap, empty, size, back, emplace
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);

    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    cout << endl;
}