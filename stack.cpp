#include <iostream>;
using namespace std;
	typedef int ELementtype;
	typedef int position;
	class stack {
	private:
		ELementtype* Data;
		int capacity;
		int top;
		int counter;
	public:
		stack(int size = 10) {
			MakeNull(size);
		}
		void MakeNull(int size) {
			capacity = size;
			Data = new ELementtype[size];
			top = -1;
			counter = 0;
		}
		bool isfull() {
			return (top == capacity - 1);
		}
		bool isempty() {
			return (top == -1);
		}
		void push(ELementtype x) {
			if (isfull()) {
				cout << "the satck is full";
			}
			Data[++top] = x;
			counter++;
		}
		ELementtype pop() {
			if (isempty()) {
				cout << "the satckkk is empty have zero element ";
			}
			return top;
			counter--;
			Data[top--];
		}
		ELementtype Top() {
			if (isempty()) {
				cout << "the satck is empty have zero element ";
			}
			else
			{
				return Data[top];
			}
		}
		int size() {
			return counter;
		}
		int Printstack() {
			if (isempty()) {
				cout << "the satck is empty have zero element";
			}
			for (int i = top; i < 0; i--) {
				cout << "The Element Is" << Data[i];
			}
		}
	};
	struct Node
	{
		ELementtype Data;
		Node* next;
	};
	typedef Node* position;
	class LinkedStack {
	private:
		position top;
		int counter;
	public:
		//built a constructor 
		LinkedStack() {
			MakeNull();
		}
		void MakeNull() {
			top = NULL;
			counter = 0;
		}
		bool isEmpty() {
			return (top == NULL);
		}
		void push (ELementtype x){
			position node = new Node;
			node->Data = x;
			node->next = top;
			top = node;
			counter++;
		}
		ELementtype pop() {
			if (isEmpty()) {
				cout << " the linked datck is empty";
				return -1;
			}
			else 
			{
				ELementtype x = top->Data;
				top = top->next;
				counter--;
				return x;
			}
		}
		//Top; returns item at top O(1)
		ELementtype Top() {
			if (isEmpty()) {
				cout << "Stack is empty" << endl;
				return -0;
			}
			else
				return top->Data;

		}
		//O(1)
		int Size() {
			return counter;
		}
		void LinkedStackPrint() {
			if (isEmpty()) {
				cout << "the stack is empty"<< endl;
			}
			else {
				position q = top->next;
				cout << "The top item ->>"<< top->Data ;
				while (q != NULL) {
					cout << q->Data;
					q = q->next;
				}
			}
		}

	};

	void main(){
		system("pause");
	}
