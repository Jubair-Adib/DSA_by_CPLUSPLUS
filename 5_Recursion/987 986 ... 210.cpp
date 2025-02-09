//59
//59
#include<bits/stdc++.h>
using namespace std;

void rcom(int arr[], int length, int ini, int size){
    if(length==size){
        for(int i=0;i<size;i++){
            if(i!=0) cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
        return;
    }
    for(int i=ini;i>=0;i--){
        arr[length]=i;
        rcom(arr,length+1,i-1,size);
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[k]={0};
    rcom(arr,0,n-1,k);
    return 0;
}
