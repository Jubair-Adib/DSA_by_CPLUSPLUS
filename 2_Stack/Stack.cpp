#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    stack<ll> s;

    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    //cout<<s.top()<<endl;
    //s.pop();

    s.push(26);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    s.push(27);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    s.push(28);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    s.push(29);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    return 0;

}
