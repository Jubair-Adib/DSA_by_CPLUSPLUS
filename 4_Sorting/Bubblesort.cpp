#include<iostream>
using namespace std;

//Bubble Sort

//O(n) O(n^2)(n^2) O(1)

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }

    for(int i=0;i<n;i++){
        if(i!=0) cout<<" ";
        cout<<a[i];
    }
    cout<<endl;

    return 0;
}
