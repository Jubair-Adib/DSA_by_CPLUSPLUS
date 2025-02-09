//Max-Heap
//Runtime Complexity:
//Memory Complexity:

#include<iostream>
using namespace std;

int heap[1000];
int last_index=-1;

int get_max(){
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
        if(heap[parent(i)]>heap[i]) break;
        swap(heap[parent(i)],heap[i]);
        i=parent(i);
    }
}
/* By Recursion
void heapifyUp(int i){
    if(i==0) break;
    if(heap[parent(i)]>heap[i]) break;
    swap(heap[parent(i)],heap[i]);
    heapifyUP(parent(i));
}
*/

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

// By Recursion
void heapifyDown(int i){

    if(leftChild(i)>last_index) return;
    int mx_node=-1;

    if(leftChild(i)<=last_index && rightChild(i)>last_index) mx_node = leftChild(i);
    else if (heap[leftChild(i)]>heap[rightChild(i)]) mx_node = leftChild(i);
    else mx_node = rightChild(i);

    if(heap[i]>=heap[mx_node]) return;

    swap(heap[i],heap[mx_node]);

    heapifyDown(mx_node);
}

int extractMax(){
    int ret=heap[0];
    heap[0]=heap[last_index];
    last_index--;
    heapifyDown(0);
    return ret;
}

void print_max_heap(int x){
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
