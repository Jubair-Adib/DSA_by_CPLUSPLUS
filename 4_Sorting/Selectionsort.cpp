#include <iostream>
using namespace std;

//Selection sort

// O(n^2) O(n^2) O(n^2)

//(5) 4 3 2 (1)*
//1 (4) 3 (2)* 5
//1 2 3 4 5

//(3) 4 5 2 (1)*
//1 (4) 5 (2)* 3
//1 2 (5) 4 (3)*
//1 2 3 4 5

void ss(int a[], int n){
    int min;
    for (int i=0;i<n-1;i++){
        for (int j=i;j<n;j++){
            if(j==i) min=j;
            else{
                if(a[min]>a[j]) min=j;
            }
        }
        swap(a[i],a[min]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ss(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}

