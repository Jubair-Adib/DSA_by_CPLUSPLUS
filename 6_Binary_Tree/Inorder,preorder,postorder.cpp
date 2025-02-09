#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll k=0;

void inorder(ll a[], ll i, ll n){
    if(i>=n) return;
    inorder(a,2*i+1,n);
    if(k==1) cout<<" ";
    else if(k==0) k=1;
    cout<<a[i];
    inorder(a,2*i+2,n);
}

void preorder(ll a[], ll i, ll n){
    if(i>=n) return;
    if(k==1) cout<<" ";
    else if(k==0) k=1;
    cout<<a[i];
    preorder(a,2*i+1,n);
    preorder(a,2*i+2,n);
}

void postorder(ll a[], ll i, ll n){
    if(i>=n) return;
    postorder(a,2*i+1,n);
    postorder(a,2*i+2,n);
    if(k==1) cout<<" ";
    else if(k==0) k=1;
    cout<<a[i];
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    //inorder(a,0,n);
    //preorder(a,0,n);
    //postorder(a,0,n);
    cout<<endl;
    return 0;
}
