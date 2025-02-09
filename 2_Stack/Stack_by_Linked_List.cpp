#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct Stack{

    struct node{
        ll val;
        node *next;
    };

    node *head=NULL;
    node *tail=NULL;

    void push(ll x){
        node *a=(node*)malloc(sizeof(node));
        a->val=x;
        a->next=NULL;
        if(head==NULL){
            head=tail=a;
            return;
        }
        tail->next=a;
        tail=a;
    }

    void pop(){
        if(head==NULL) return ;
        if(head==tail) { head=tail=NULL; return; }
        else{
            node *a=head;
            while(a->next!=tail) a=a->next;
            tail=a;
            tail->next=NULL;
        }
    }

    int top(){
        if(tail==NULL) return -1;
        return tail->val;
    }

    bool isEmpty(){
        if(head==NULL) return true;
        else return false;
    }

};

int main(){

    Stack s;

    cout << s.isEmpty() << endl;
    cout << s.top() << endl;

    s.push(26);
    cout << s.top() << endl;

    s.push(27);
    cout << s.top() << endl;

    s.push(28);
    cout << s.top() << endl;

    s.push(29);
    cout << s.top() << endl;

    s.pop();
    cout << s.top() << endl;

    cout << s.isEmpty() << endl;
    cout << s.top() << endl;

    return 0;

}
