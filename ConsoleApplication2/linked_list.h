#ifndef singlelinkedlist
#define singlelinkedlist

struct node {
	int data;
	node* next;

};

class Single_Linked_List {
private:

public:
	Single_Linked_List();
	void push_front();
	void push_back();
	void pop_front();
	void pop_back();
	bool empty();
	void insert(size_t, const & item)


};

#endif 
