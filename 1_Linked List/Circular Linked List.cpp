#include<iostream>
using namespace std;
#define ll long long int

struct circular_linked_list{

    ll size=0;

    struct node{
        node *next;
        ll val;
    };

    node *head=NULL;
    node *tail=NULL;

    ll print_size(){
        return size;
    }

    void print(){
        node *a=head;
        ll x=size,y=size;
        while(x--){
            printf("%d",a->val);
            if(--y) cout<<" ";
            a=a->next;
        }
        cout<<endl;
    }

    void insert_first(ll x){
        size++;

        node *a=(node*)malloc(sizeof(node));
        a->next=NULL;
        a->val=x;

        if(head==NULL){
            head=a;
            tail=a;
            head->next=head;
        }
        else{
            a->next=head;
            head=a;
            tail->next=head;
        }
    }

    void insert_last(ll x){
        size++;

        node *a=(node*)malloc(sizeof(node));
        a->next=NULL;
        a->val=x;

        if(tail==NULL){
            head=a;
            tail=a;
            head->next=head;
        }
        else{
            tail->next=a;
            tail=a;
            tail->next=head;
        }
    }

    ll delete_first(){
        size--;
        if(head==NULL) return -1;
        if(head==tail){
            ll x=head->val;
            head=NULL;
            tail=NULL;
            return x;
        }
        else{
            ll x=head->val;
            head=head->next;
            tail->next=head;
            return x;
        }
    }

    ll delete_last(){
        size--;
        if(tail==NULL) return -1;
        if(tail==head){
            ll x=tail->val;
            head=NULL;
            tail=NULL;
            return x;
        }
        else{
            ll x=tail->val;
            node *a=head;
            while(a->next!=tail){
                a=a->next;
            }
            tail=a;
            a->next=head;
            return x;
        }
    }
};



int main(){
    circular_linked_list s;

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
