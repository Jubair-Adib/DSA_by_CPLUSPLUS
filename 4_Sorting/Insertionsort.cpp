#include <iostream>
using namespace std;

//Insertion sort

// O(n) O(n^2) O(1)

//12 11 13 5 6
//(11) 12 13 5 6
//11 (12) 13 5 6
//11 12 (13) 5 6
//(5) 11 12 13 6
//5 (6) 11 12 13

void is(int a[], int n){

    for (int i=1;i<n;++i){
        int key=a[i];
        int j=i-1;
        while(0<=j && a[j] > key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++){
        if(i!=0) cout<<" ";
        cout<<a[i];
    }

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    is(a,n);
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
