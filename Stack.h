//
// Created by alame on 12/29/2021.
//

#ifndef FINAL_DATA_STRUE_STACK_H
#define FINAL_DATA_STRUE_STACK_H
#include<iostream>
using namespace std;

const int SIZE = 10;

class Stack{
    int myStack [SIZE];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(int val){
        if(top == SIZE -1) {
            cout<<"Overflow\n";
        }
        top++;
        myStack[top] = val;
    }
    int pop(){
        if(top == -1){
            cout<<"Underflow\n";
            return -1;
        }
        return myStack[top--];

    }
    void  peek(){
        if(top == -1){
            cout<<"Empty Stack\n";

        }
        cout<<"the top element : ";
      cout<< myStack[top]<<endl;
    }
void display(){
    if(top == -1){
        cout<<"Empty Stack\n";

    }
    else{
        cout<<"The elements in stack : ";
        for (int i=top;i>=0;i--){
             cout<<myStack[i]<<", ";
        }
    }
    }
};
#endif //FINAL_DATA_STRUE_STACK_H
