//59
//59
//59
//59
//59
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    string s;
    cin>>s;
    stack<ll> ans;
    for(ll i=0;i<s.size();i++){
        if(isdigit(s[i])) ans.push(s[i]-'0');
        else{
            ll x=ans.top(); ans.pop();
            ll y=ans.top(); ans.pop();
            if(s[i]=='+') ans.push(y+x);
            else if(s[i]=='-') ans.push(y-x);
            else if(s[i]=='*') ans.push(y*x);
            else if(s[i]=='/') ans.push(y/x);
        }
    }
    cout<<ans.top()<<"\n";
    return 0;
}
