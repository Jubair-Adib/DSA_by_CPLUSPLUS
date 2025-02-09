#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    queue<ll> q;

    cout << q.empty() << endl; // Output: 1 (true)
    cout << q.size() << endl;  // Output: 0

    // Pushing elements into the queue
    q.push(26);
    cout << q.front() << endl; // Output: 26
    cout << q.back() << endl;  // Output: 26
    cout << q.size() << endl;  // Output: 1

    q.push(27);
    cout << q.front() << endl; // Output: 26
    cout << q.back() << endl;  // Output: 27
    cout << q.size() << endl;  // Output: 2

    q.push(28);
    cout << q.front() << endl; // Output: 26
    cout << q.back() << endl;  // Output: 28
    cout << q.size() << endl;  // Output: 3

    q.push(29);
    cout << q.front() << endl; // Output: 26
    cout << q.back() << endl;  // Output: 29
    cout << q.size() << endl;  // Output: 4

    // Popping an element
    q.pop();
    cout << q.front() << endl; // Output: 27
    cout << q.back() << endl;  // Output: 29
    cout << q.size() << endl;  // Output: 3

    cout << q.empty() << endl; // Output: 0 (false)
    cout << q.front() << endl; // Output: 27
    cout << q.back() << endl;  // Output: 29
    cout << q.size() << endl;  // Output: 3

    // Iterating through the queue
    queue<ll> temp = q; // Copy the queue to preserve the original
    while (!temp.empty()) {
        cout << temp.front() << " "; // Output the front element
        temp.pop();                   // Remove the front element
    }
    cout << endl;
    return 0;
}
