//Min-Heap
#include<iostream>
using namespace std;

int heap[1000];
int last_index=-1;

int get_min(){
    if(last_index==-1) return -1;
    return heap[0];
}

int parent(int i){
    return (i-1)/2;
}

//By-Loop
void heapifyUp(int i){
    while(1){
        if(i==0) break;
        if(heap[parent(i)]<heap[i]) break;
        swap(heap[parent(i)],heap[i]);
        i=parent(i);
    }
}

void insert(int x){
    heap[last_index+1]=x;
    last_index++;
    heapifyUp(last_index);
}

int leftChild(int i){
    return 2*i+1;
}

int rightChild(int i){
    return 2*i+2;
}

void heapifyDown(int i){
    int node=i;
    int left=leftChild(i);
    int right=rightChild(i);
    if (left<=last_index && heap[left]<heap[node]) node=left;
    if (right<=last_index && heap[right]<heap[node]) node=right;
    if (node!= i){
        swap(heap[i],heap[node]);
        heapifyDown(node);
    }
}

int extractMin(){
    int ret=heap[0];
    heap[0]=heap[last_index];
    last_index--;
    heapifyDown(0);
    return ret;
}

void print_min_heap(int x){
    for(int i=0;i<=x;i++){
        if(i!=0) cout<<" ";
        cout<<heap[i];
    }
    cout<<endl;
}

int main(){
    insert(20);
    insert(30);
    insert(300);
    insert(10);
    insert(100);
    insert(150);
    insert(40);
    print_max_heap(last_index);
    extractMax();
    print_max_heap(last_index);
    extractMax();
    print_max_heap(last_index);
    return 0;
}