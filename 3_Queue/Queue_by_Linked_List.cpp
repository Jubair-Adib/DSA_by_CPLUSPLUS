#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct Queue{

    ll Qsize=0;

    struct node{
        ll val;
        node *next;
    };

    node *head=NULL;
    node *tail=NULL;

    void push(ll x){
        Qsize++;
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
        Qsize--;
        if(head==NULL) return ;
        if(head==tail) { head=tail=NULL; return; }
        else{
            head=head->next;
        }
    }

    ll front(){
        if(head==NULL) return -1;
        return head->val;
    }

    ll back(){
        if(tail==NULL) return -1;
        return tail->val;
    }

    bool empty(){
        if(head==NULL) return true;
        else return false;
    }

    ll size(){
        return Qsize;
    }

};

int main(){

    Queue q;

    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    //cout<<q.front()<<endl;
    //cout<<q.back()<<endl;
    //q.pop();

    q.push(26);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    q.push(27);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    q.push(28);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    q.push(29);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    return 0;

}
