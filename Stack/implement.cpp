#include <bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

    public:
        Stack(int s){
            size=s;
            top=-1;
            arr=new int[s];
        }

        void push(int value){
            if(top==size-1){
                cout<<"Stack Overflow.\n";
                return;
            }
            else{
                top++;
                arr[top]=value;
                cout<<"Pushed "<<value<<" into the stack\n";
            }
        }

        void pop(){
            if(top==-1){
                cout<<"Stack underflow.\n";
                return;
            }
            else{
                cout<<"Popped "<<arr[top]<<" from the stack\n";
                top--;
            }
        }

        int peek(){
            if(top==-1){
                cout<<"Stack is empty.\n";
                return -1;
            }
            else{
                return arr[top];
            }
        }

        int isSize(){
            return top+1;
        }

    
};

int main() {
    Stack s(5);
    s.push(5);
    s.push(6);
    s.push(8);
    s.push(5);
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isSize();

}