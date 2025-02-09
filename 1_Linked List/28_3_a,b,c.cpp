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
    node *mid=NULL;

    void insert_first(ll x){
        size++;
        node *a=(node*)malloc(sizeof(node));
        a->val=x;
        a->next=NULL;
        a->prev=NULL;
        if(head==NULL){
            head=a;
            tail=a;
            mid=a;
        }
        else{
            a->next=head;
            head->prev=a;
            head=a;
            if(size%2==0) mid=mid->prev;
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
            mid=a;
        }
        else{
            a->prev=tail;
            tail->next=a;
            tail=a;
            if(size%2==1) mid=mid->next;
        }
    }

    void delete_mid(){
        if(mid==NULL) return;
        size--;
        if(mid->prev) mid->prev->next= mid->next;
        if(mid->next) mid->next->prev= mid->prev;
        if(size%2==0) mid=mid->prev;
        if(size%2==1) mid=mid->next;
    }

    bool isCircular(){
        node *a=(node*)malloc(sizeof(node));
        node *b=(node*)malloc(sizeof(node));
        a=head;
        b=head;
        while(b!=NULL && b->next!=NULL){
            a=a->next;
            b=b->next->next;
            if(a==b){
                return true;
            }
        }
        return false;
    }

    void sort(){
        node *a=(node*)malloc(sizeof(node));
        node *b=(node*)malloc(sizeof(node));
        a=head;
        b=NULL;
        int x;
        if(head==NULL) return;
        else{
            while(a!=NULL){
                b=a->next;
                while(b!=NULL){
                    if(a->val>b->val){
                        x=a->val;
                        a->val=b->val;
                        b->val=x;
                    }
                    b=b->next;
                }
                a = a->next;
            }
        }
    }

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

    void mp(){
        cout<<mid->val<<endl;
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
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    s.insert_first(10);
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    s.insert_last(100);
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    s.insert_last(50);
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    cout<<"Is circular?\n"<<s.isCircular()<<endl;

    s.sort();

    s.delete_mid();
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    s.delete_mid();
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    s.delete_mid();
    s.mp();
    cout<<s.print_size()<<endl;
    s.print();

    s.delete_mid();
    cout<<s.print_size()<<endl;
    s.print();

    return 0;
}
