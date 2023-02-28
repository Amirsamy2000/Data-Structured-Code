//
// Created by alame on 12/31/2021.
//

#ifndef FINAL_DATA_STRUE_LINKEDLIST_H
#define FINAL_DATA_STRUE_LINKEDLIST_H
class  Linked{
    struct node{
        int data;
        node*next;
    };
  node*head;
public:
    Linked(){
        head=NULL;
    }
void insertnode(int val){
        node*new_node,*last;
        new_node=new node;
        new_node->data=val;
        if(head==NULL){
            head=new_node;
            new_node->next=NULL;
        }
        else{
            last=head;
            while(last->next!=NULL){
                last=last->next;
            }
            last->next=new_node;
            new_node->next=NULL;
        }
    }
void deletenode(){
        if(head==NULL){
            cout<<"Linkend List is empty"<<endl;
        }
        else if(head->next==NULL){
            delete(head);
            head=NULL;
        } else{
            node*ptr=head;
            while(ptr->next->next!=NULL){
                ptr=ptr->next;
            }
            delete(ptr->next);
            ptr->next=NULL;
        }
    }
    void peek(){
        if(head==NULL){
            cout<<"Linkend List is empty"<<endl;
        } else{
            node*pe=head;
            while(pe->next->next!=NULL){
                pe=pe->next;
            }
            cout<<"The top element : "<<pe->next->data<<endl;
        }
    }
    void display(){
        node*current=head;
        if(head==NULL){
            cout<<"Linkend List is empty"<<endl;
        } else{

            cout<<"The element in Linked list : ";
            while(current!=NULL){
                cout<<current->data<<",";
                current=current->next;
            }
        }
    }
};

#endif //FINAL_DATA_STRUE_LINKEDLIST_H
