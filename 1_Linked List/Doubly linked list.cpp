#include<iostream>
using namespace std;
#define ll long long int

struct doubly_linked_list{
    ll size=0;
    struct node{
        node *next;
        node *prev;
        ll val;
    };
    node *head=NULL;
    node *tail=NULL;

    void print(){
        node *a=head;
        ll x=size,y=size;
        while(y--){
            printf("%d",a->val);
            if(--x) cout<<" ";
            a=a->next;
        }
        cout<<endl;
    }

    void insert_first(ll x){
        size++;
        node *a=(node*)malloc(sizeof(node));
        a->val=x;
        a->next=NULL;
        a->prev=NULL;
        if(head==NULL){
            head=a;
            tail=a;
        }
        else{
            a->next=head;
            head->prev=a;
            head=a;
        }
    }

    void insert_last(ll x){
        size++;
        node *a=(node*)malloc(sizeof(node));
        a->val=x;
        a->next=NULL;
        a->prev=NULL;

        if(tail==NULL){
            head=a;
            tail=a;
        }
        else{
            a->prev=tail;
            tail->next=a;
            tail=a;
        }
    }

    void delete_first(){
        size--;
        if(head==NULL) return;
        else if(head==tail) head=tail=NULL;
        else{
            head=head->next;
            head->prev=NULL;
        }
    }
    void delete_last(){
        size--;
        if(tail==NULL) return;
        else if(tail==head) head=tail=NULL;
        else{
            tail=tail->prev;
            tail->next=NULL;
        }
    }
    ll print_size(){
        return size;
    }
};

int main(){

    doubly_linked_list s;

    cout<<s.print_size()<<endl;
    s.print();

    s.insert_first(5);
    cout<<s.print_size()<<endl;
    s.print();

    s.insert_first(10);
    cout<<s.print_size()<<endl;
    s.print();

    s.insert_last(100);
    cout<<s.print_size()<<endl;
    s.print();

    s.insert_last(50);
    cout<<s.print_size()<<endl;
    s.print();

    s.delete_first();
    cout<<s.print_size()<<endl;
    s.print();

    s.delete_last();
    cout<<s.print_size()<<endl;
    s.print();

    cout<<s.print_size()<<endl;
    return 0;
}
