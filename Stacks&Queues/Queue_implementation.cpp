#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* nextElement;
	Node* prevElement;

	Node(int data){
		this->data = data;
		nextElement = nullptr;
		prevElement = nullptr;
	}
};

class DoublyLL {
private:
	Node* head;
	Node* tail;
public:
	int size;
	DoublyLL();
	~DoublyLL();
	bool isEmpty();
	int getHead();
	int getTail();
	int printList();
	int insertTail(int value);
	bool deleteHead();
};

DoublyLL::DoublyLL(){
	head = nullptr;
	tail = nullptr;
	size = 0;
}
DoublyLL::~DoublyLL(){
	Node *cur = head;
	Node *next;
	while(cur){
		next = cur->nextElement;
		delete(cur);
		cur = next;
	}
}
bool DoublyLL::isEmpty(){
	if(head == nullptr) return true;
	else return false;
}
int DoublyLL::getHead(){
	if(!isEmpty()){
		return head->data;
	}
	else return -1;
}

int DoublyLL::getTail(){
	if(!isEmpty()) return tail->data;
	else return -1;
}

int DoublyLL::printList(){
	if(isEmpty()) return false;
	Node *temp = head;
	while(temp != nullptr){
		cout << temp->data << "->";
		temp = temp->nextElement;
	}
	cout << "null" << endl;
	return true;
}
int DoublyLL::insertTail(int value) {    // insert value at tail
    Node * newNode = new Node(value);
    if (isEmpty()) {
        head=newNode;
        tail=newNode;
    } 
    else { 
        newNode->prevElement = tail;
        tail->nextElement = newNode;
        tail = newNode;
    }
    size++;

    return tail->data;
}

bool DoublyLL::deleteHead() {
    bool deleted = false;
    if (this->isEmpty()) {
        cout << "List is Empty" << endl;
        return deleted;
    }
    Node* nodeToRemove = head;
    
    if (size == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->nextElement;

        head->prevElement = nullptr;
        nodeToRemove->nextElement = nullptr;
    }
    delete nodeToRemove;  
    size--;
    return true; 
}

class myQueue {
private:
	DoublyLL items;
	int numElements;
public:
	myQueue() {
		numElements = 0;
	}
	int isEmpty() {
      return (items.size == 0);
    }

    int getFront() {
      if (!(items.isEmpty())) {
        return items.getHead();
      }else {
        return -1;
      }
    }

    int getSize() {
      return items.size;
    }
    int enqueue(int value) {
      return items.insertTail(value);
    }

    int dequeue() {
      return items.deleteHead();
    }

    int getTail() {
      if (!(items.isEmpty())) {
        cout << "getTail(): " << items.getTail() << endl;
        return items.getTail();
      } else {
        return -1;
      }
    }

    bool showqueue() {
      return items.printList();
    }
};

string* findBin(int n) {
    string *result=new string[n];
    myQueue queue;
    queue.enqueue(1);

    string s1,s2;
    for (int i = 0; i < n; i++) {
        result[i] =to_string(queue.dequeue());
        s1 = result[i] + "0";
        s2 = result[i] + "1";
        queue.enqueue(stoi(s1));
        queue.enqueue(stoi(s2));
    }

    return result;
}

int main() {
    myQueue q;
    for(int i=1; i<=5; i++) {
        q.enqueue(i);      // inserting data in queue
        q.showqueue();
    }

    q.getFront();
    q.getTail();
    q.getSize();  // size of queue

    while (q.isEmpty() == false)
    {
      q.dequeue();
    }
    q.showqueue();

    auto output = findBin(8);
    for (int i = 0; i < 8; i++)
      cout << output[i] << " ";
    return 0;
}






