#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    };
};

class List{
    public:
    Node* head;
    Node* tail;


     List(){
        head = tail = NULL;
     };

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    };

    void printNodes(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" <<endl;
        // free the variable from memory;
    };

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;            
        }
        else{
            tail->next = newNode; 
            tail = newNode;
        }
    };

    // pop front and back, insert at an index, search (Access), free memory, pop_all;
    void pop_front(){
        Node* temp  =  head;
        if(head==NULL){
            cout<<"Nothing to pop, ll is empty"<<endl;
            return;
        }
        else{
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    };

    void pop_back(){
        Node* temp = head;
        if(head==NULL){
            cout<<"Nothing to pop, ll is empty"<<endl;
            return;
        }

        while(temp->next!=tail){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos){
        if(pos < 0){
    cout << "Invalid position" << endl;
    return;
}
        if(pos == 0){
            push_front(val);
        }

        if(head==NULL){
            cout<<"Nothing to pop, ll is empty"<<endl;
            return;
        }

        Node* temp = head;
        for(int i = 0; i < pos-1; i++){
            temp = temp->next;
        }
         
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next  = newNode;
    };

    int search(int key){
        if(head==NULL){
            cout<<"Nothing to pop, ll is empty"<<endl;
            return -1;
        }
        Node* temp = head;
        int idx = 0;

        while(temp->next != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

};


int main(){
    List ll;
    ll.push_front(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.insert(4,3);
    
    ll.printNodes();

    int idx = ll.search(1);
    cout<<"Search result: "<<idx<<endl;

    return 0;
}