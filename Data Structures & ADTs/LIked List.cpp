//
// Created by user on 2/23/2025.
//
#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class linkedList {
private:
    Node* head;
public:
    linkedList() {
        head = nullptr;
    }
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        }else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void print() {
        Node* temp = head;
        if (head == nullptr){cout << "Linked List is Empty";}
        while (temp != nullptr) {
            cout << (*temp).data << " ";
            temp = (*temp).next;
        }
        cout<<endl;

    }

};

int main() {
    linkedList LL1;
    LL1.append(10);
    LL1.append(20);
    LL1.append(30);
    LL1.append(40);
    LL1.append(50);
    LL1.append(60);
    LL1.append(70);
    LL1.append(80);
    LL1.append(90);
    LL1.append(100);

    LL1.print();
}