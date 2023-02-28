//
// Created by alame on 12/31/2021.
//

#ifndef FINAL_DATA_STRUE_QUEUE_H
#define FINAL_DATA_STRUE_QUEUE_H
const int CONT=20;
class queue{
    int rear;
    int front;
   int myQueue[CONT];
public:
   queue(){
       rear=-1;
       front=-1;
   }
    void enqueue(int val){
      if(rear!=CONT-1){
          if(rear==-1&&front==-1){
              front++;
              rear++;
              myQueue[rear]=val;
          } else{
              myQueue[++rear]=val;
          }
      }
      else
      {
          cout<<"Queue is over flow"<<endl;
      }
   }

    void peek(){
       if(rear!=-1&&front!=-1&&front<=rear){
           cout<<"the top element : ";
           cout<<myQueue[front]<<endl;
       }
       else{
           cout<<"Queue is empty"<<endl;
       }
   }
void display(){
    if(rear!=-1&&front!=-1&&front<=rear){
        cout<<"The elements in Queue : ";
       for(int i=front;i<=rear;i++){
           cout<<myQueue[i]<<",";
       }
       cout<<endl;
    }
    else{
        cout<<"Queue is empty"<<endl;
    }
   }


    void dequeue(){
      if(rear!=-1&&front!=-1&&front<=rear){
          front++;
      }
      else{
          cout<<"Queue is empty"<<endl;
          rear=front=-1;
      }
    }
};
#endif //FINAL_DATA_STRUE_QUEUE_H
