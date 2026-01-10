#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* nextNodeAddress;
};

Node* head = nullptr;

Node* createNode(int data);
void addNodeToFront(int data);
void addNodeToEnd(int data);
void deleteAtFront();
void deleteAtEnd();
void deleteAfter(int data);
void updateNode(int data, int target);
void printList();

Node* createNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->nextNodeAddress = nullptr;

    return temp;
}

void addNodeToFront(int data){
    
    if(head == nullptr){
        head = createNode(data);
    }else{
        Node* temp = createNode(data);
        temp->nextNodeAddress = head;
        head = temp;
    }
}

void addNodeToEnd(int data){

    if(head == nullptr){
        head = createNode(data);
    }else{
        Node* temp = createNode(data);
        Node* lastNode = head;
        while(lastNode->nextNodeAddress != nullptr){
            lastNode = lastNode ->nextNodeAddress;
        }
        lastNode->nextNodeAddress = temp;
    }
}

void deleteAtFront(){
    
    if(head == nullptr){
        cout<<"No node to delete"<<endl;
    }else{
        Node* temp = head;
        head = head ->nextNodeAddress;
        delete(temp);
    }
}

void deleteAtEnd(){

    if(head == nullptr){
        cout<<"No node to delete"<<endl;
    }else{
        Node* traveller = head;
        Node* follower = nullptr;

        while(traveller -> nextNodeAddress != nullptr){
            follower = traveller;
            traveller = traveller ->nextNodeAddress;
        }
        follower->nextNodeAddress = nullptr;
        delete(traveller);
    }
}

void printList(){
    Node* printer = head;
    while(printer != nullptr){
        cout<<printer->data<<" -> ";
        printer = printer->nextNodeAddress;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    addNodeToFront(34);
    addNodeToFront(23);
    addNodeToFront(12);
    addNodeToEnd(1);
    printList();
    deleteAtEnd();
    deleteAtEnd();
    deleteAtFront();
    printList();

    return 0;
}