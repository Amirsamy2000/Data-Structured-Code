#include <iostream>
#include "Stack.h"
#include "queue.h"
#include "linkedlist.h"
#include "tree.h"

void step_2() {
    cout << "The available operations" << endl;
    cout << "1.Push" << endl;
    cout << "2.Pop" << endl;
    cout << "3.peek" << endl;
    cout << "4.display" << endl;
    cout << "5.return" << endl;
    cout << "Enter your choose: ";
}    //********input e2;
void step_1() {
    cout<<" Methods Data structure: "<<endl;
    cout << "1.Stack" << endl;
    cout << "2.Queue" << endl;
    cout << "3.Linkedlist" << endl;
    cout << "4.Tree" << endl;
    cout << "5.Exit" << endl;
    cout << "Enter your choose: ";
}   // ******input e1
void step_3() {
    cout << "The available operations" << endl;
    cout << "1.Push" << endl;
    cout << "2.display" << endl;
    cout << "3.return" << endl;
    cout << "Enter your choose: ";
} //****for tree code;
void anther_op(char f1) {
    if (f1 == 'y' || f1 == 'Y') {
        step_2();

    } else {

    }
} // ******input f1;
using namespace std;

int main() {
    Stack c1;
    queue c2;
    Linked c3;
    MyTree c4;
    int e1, e2, val,val1,val2,val3;
    char f1, f2;
    amir:

    step_1();
    cin >> e1;

    // stack code;
    if (e1 == 1) {
        for (int i = 1; i <= 15; i++) {
            cout << "Stack Data structure" << endl;
            step_2();
            cin >> e2;
            if (e2 == 1) {
                cout << "push value: ";
                cin >> val;
                c1.push(val);
                cout << "Make another operations [y/n]";
                cin >> f1;
                anther_op(f1);
                if(f1=='n'){ goto amir;}

            }
            else if (e2 == 2) {
                c1.pop();
                cout<<"delete done!"<<endl;
                cout << "Make another operations [y/n]";
                cin >> f1;
                anther_op(f1);
                if(f1=='n'){ goto amir;}
            }
            else if (e2 == 3) {
                c1.peek();
                cout << "Make another operations [y/n]";
                cin >> f1;
                anther_op(f1);
                if(f1=='n'){ goto amir;}
            }
            else if (e2 == 4) {
                c1.display();
                cout << "Make another operations [y/n]";
                cin >> f1;
                anther_op(f1);
                if(f1=='n'){ goto amir;}
            }
            else if (e2 == 5) {
                goto amir;
            }
        }
    }
        // Queue code;
    else if (e1 == 2) {
        for (int i = 1; i >-1; i++) {
            cout << "Queue Data structure" << endl;
            step_2();
            cin >> e2;
            if (e2 == 1) {
                cout << "push value: ";
                cin >> val1;
                c2.enqueue(val1);
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}

            }
            else if (e2 == 2) {
                c2.dequeue();
                cout<<"delete done!"<<endl;
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}
            }
            else if (e2 == 3) {
                c2.peek();
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}
            }
            else if (e2 == 4) {
                c2.display();
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}

            }
            else if (e2 == 5) {
                goto amir;
            }
        }
    }
        // Linked list code;
    else if (e1 == 3) {
        for (int i = 1; i >-1; i++) {
            cout << "LinkedListData structure" << endl;
            step_2();
            cin >> e2;
            if (e2 == 1) {
                cout << "push value: ";
                cin >> val2;
                c3.insertnode(val2);
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}

            }
            else if (e2 == 2) {
                c3.deletenode();
                cout<<"delete done!"<<endl;
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}
            }
            else if (e2 == 3) {
                c3.peek();
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}
            }
            else if (e2 == 4) {
                c3.display();
                cout << "Make another operations [y/n]";
                cin >> f2;
                anther_op(f2);
                if(f2=='n'){ goto amir;}

            }
            else if (e2 == 5) {
                goto amir;
            }
        }
    }
        // tree code;
    else if(e1==4){
        for (int i = 1; i >-1; i++) {
            cout << "Tree Data structure :" << endl;
            step_3();
            cin >> e2;
            if (e2 == 1) {
                cout << "Enter value: ";
                cin >> val3;
                c4.insert(val3);
                cout << "Make another operations [y/n]";
                cin >> f2;
                if(f2=='y'){step_3();}
                if(f2=='n'){ goto amir;}

            }
            else if (e2 == 2) {
                cout<<"The elements in Tree : ";
                c4.travers();
                cout << "Make another operations [y/n]";
                cin >> f2;
                if(f2=='y'){step_3();}
                if(f2=='n'){ goto amir;}
            }
            else if (e2 == 3) {
                goto amir;
            }
        }
    }
    //  Exit code;
    else if(e1==5){exit;}


}