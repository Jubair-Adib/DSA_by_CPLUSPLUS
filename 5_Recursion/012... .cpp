#include<bits/stdc++.h>
using namespace std;

void rcom(int arr[], int length, int size, int ini, int n){
    if(length==size){
        for(int i=0;i<size;i++){
            if(i!=0) cout<<" ";
            cout<<arr[i];
            //cout<<(char)('a'+arr[i]);
        }
        cout<<endl;
        return;
    }
    for(int i=ini;i<n+1;i++){
        arr[length]=i;
        rcom(arr,length+1,size,i+1,n);
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[k]={0};
    rcom(arr,0,k,1,n);
    return 0;
}


