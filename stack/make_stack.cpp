#include <iostream>
using namespace std;

class Node{

	public :
		int data;
		Node * next;

		Node(){
			this->data = 0;
			this->next = NULL;
		}

};

class Stack{

	private:
		int size;
		Node* top;

	public:
		Stack(){
			size = 0;
			top = NULL;
		}

		void Push(int value){
			Node * newNode = new Node();
			newNode->data = value;
			this->size++;

			if(IsEmpty()){
				top = newNode;
			}
			else{
				newNode->next = top;
				top = newNode;
			}
		}

		int Pop(){
			if(IsEmpty()){
				cout << "empty" << endl;
				return 0;
			}
			this->size--;
			int top_data = top->data;
			top = top->next;

			return top_data;
		}

		void Peek(){
			cout << top->data << endl;
		}

		bool IsEmpty(){
			if(this->size == 0)
				return true;
			return false;
		}
		int Size(){
			return this->size;
		}
		
		void Print(){
			if(IsEmpty())
				return;
			Node * top_node = top;
			for(int i=0; i<this->size; i++){
				cout << top->data << " ";
				top = top -> next;
			}
			cout << endl;
			top = top_node;
		}
};

int main(){

	Stack test;
	for(int i=0; i<10; i++)
		test.Push(i);
	test.Print();
	cout << endl;
	test.Peek();
	cout <<endl;
	cout << "size : "  << test.Size() << endl;
	int size = test.Size();
	for(int i=0; i<size; i++)
		cout << test.Pop() << " ";	

	return 0;
}
