#ifndef singleLL
#define singleLL
#include <iostream>;
using namespace std;


struct Node {
    int data;
    Node* next;

    Node(const int& data_item, Node* next_ptr = NULL) :
        data(data_item), next(next_ptr) {}
    
};

class LL {

private:
    Node* head;
    Node* tail;
    size_t num_items;

public:
    //constructor
    LL() {
        head = nullptr;
        tail = nullptr;
        num_items = 0;
    }
    //destructor
    ~LL() {
        while (head != nullptr) {
            Node* next = head->next;
            delete head;
            head = next;
        }
        tail = nullptr;
        num_items = 0;

    }

    //new node is made 
    void push_front(int a) {
        Node* newnode = new Node(a);
        newnode->next = head;
        head = newnode;

        if (tail == nullptr) {
            tail = head;
        }
        num_items++;
    }


    void push_back(int a) {
        if (tail != nullptr) {
            Node* newnode = new Node(a);
            tail->next=newnode;
            tail = tail->next;
            num_items++;
        }
        else {
            push_back(a);
        }
       
    }
    void pop_front() {
        if (head == nullptr) {
            cout << "list is already empty";
        }
        else{
            Node* front = head;
            head = head->next;
            delete front;
            num_items--;
        }
    }


   void pop_back(){
       if (head == nullptr) {
           cout << "list is already empty";
       }
       else {
           Node* secondlast = head;
           while (secondlast->next->next != nullptr) {
               secondlast = secondlast->next;
           }
           delete tail;
           tail = secondlast;
           tail->next = nullptr;

       }
   }
   
   int front() {
       return head->data;
    }

   int back() {
       return tail->data;
    }
   bool empty() {
       return(head == nullptr);
    }
   void insert(size_t index, const int& item) {
       if (index == 0) {
           push_front(item);
       }
       else {
           Node* temp = head;
           for (int i = 0; temp != nullptr && i < index - 1; i++) {
               temp = temp->next;
           }
           if (temp == nullptr) {
               cout << "try a different index";
           }
           else {
               Node* newnode = new Node(item);
               newnode->next = temp->next;
               temp->next = newnode;
           }

       }
    }
   void remove(size_t index) {
       if (index > num_items) {
           cout << "index out of range";
       }
       else if (index == 0) {
           pop_front();
       }
       else {
           Node* temp = head;
           for (int i = 1; i < index; i++) {
               temp = temp->next;
           }
           temp->next = temp->next->next;
           delete temp->next;
       }
   }

   size_t find(const int& item) {
       size_t counter = 0;
       Node* ptr = head;
       while (ptr != nullptr) {
           if (ptr->data == item) {
               return counter;
           }
           ptr = ptr->next;
           counter++;
       }
       return num_items;
   }
};

#endif 