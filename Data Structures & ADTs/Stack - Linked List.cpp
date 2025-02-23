//
// Created by user on 2/23/2025.
//
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Pushed onto stack!" << endl;
    }
    void pop() {
        if (isEmpty()){cout<<"Stack is empty!"<<endl;}
        else {
            Node* temp=top;
            top = top->next;
            cout << temp->data << " popped from stack" <<endl;
            delete temp;
        }
    }
    bool isEmpty() {
        return top==nullptr;
    }
};

int main() {
    Stack stack;

    stack.pop();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.push(80);
    stack.pop();
    stack.pop();
    stack.push(12356);
    stack.pop();
    stack.push(53);
    stack.pop();
    cout<<stack.isEmpty()<<endl;



}