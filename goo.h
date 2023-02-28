//
// Created by alame on 12/31/2021.
//

#ifndef FINAL_DATA_STRUE_GOO_H
#define FINAL_DATA_STRUE_GOO_H
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*right;
    Node*left;
};

class MyTree{
    Node*root;
public:
    MyTree(){
        root = NULL;
    }
    void insert(int value){
        Node*newNode = new Node;
        newNode->data = value;
        newNode->right = NULL;
        newNode->left = NULL;

        if(root==NULL){
            root = newNode;
            return;
        }
        insertNode(&root,newNode);
    }
    void insertNode(Node**parent,Node*node){
        if(*parent == NULL){
            *parent = node;
            return;
        }
        if(node->data > (*parent)->data){
            insertNode(&((*parent)->right),node);
        }else{
            insertNode(&((*parent)->left),node);
        }

    }

    void travers(){
        if(root != NULL){

            inTravers(root);
        }

    }
    void inTravers(Node*node){
        if(node== NULL){
            return;
        }
        inTravers(node->left);
        cout<<node->data <<" ";
        inTravers(node->right);
    }

    void prTravers(Node*node){
        if(node== NULL){
            return;
        }
        cout<<node->data <<" ";
        prTravers(node->left);
        prTravers(node->right);
    }

};

int main(){
    MyTree tree ;
    tree.insert(6);
    tree.insert(5);
    tree.travers();
    system("pause");
    return 0;

}
#endif //FINAL_DATA_STRUE_GOO_H
