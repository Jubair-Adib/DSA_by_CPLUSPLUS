//59
//59
//59
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll f(char x){
    if(x=='^') return 3;
    else if(x=='/') return 2;
    else if(x=='*') return 2;
    else if(x=='+') return 1;
    else if(x=='-') return 1;
}

int main(){
    string s;
    cin>>s;
    vector<char> v;
    stack<char> st;
    for(ll i=0;i<s.size();i++){
        if((65<=s[i] && s[i]<=90)||(97<=s[i] && s[i]<=122)) v.push_back(s[i]);
        else{
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(st.top()!='('){
                    v.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else{
                if(st.size()==0 || st.top()=='(') st.push(s[i]);
                else if(f(s[i])>=f(st.top())) st.push(s[i]);
                else{
                    while((f(s[i])<f(st.top())) && (st.size()!=0) && st.top()!='('){
                        v.push_back(st.top());
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
    }
    //all done, just stack transfer
    while(st.size()!=0){
        v.push_back(st.top());
        st.pop();
    }
    //output
    for(auto x:v) cout<<x;
    cout<<"\n";
}
