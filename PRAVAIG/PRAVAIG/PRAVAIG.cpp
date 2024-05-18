#include <iostream>
using namespace std;
stuct Node{
	int value;
	Node* next;
}

Struct LinkedList{
	stuct Node obj;

	void insertatend(int data)
	{
		Node* ptr = &obj;
		Node* temp;

		if (ptr == nullptr)
		{
			temp = new Node;
			temp->value = data;
			temp->next = nullptr;
			ptr = temp;
			return;
		}

		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		temp = new Node;
		temp->value = data;
		temp->next = nullptr;
		ptr->next = temp;
		return;
	}


	void printlist()
	{
		Node* ptr = &obj;
		if (ptr == nullptr)
		{
			cout << endl << "List is empty";
			return;
		}

		while (ptr->next != nullptr)
		{
			cout << ptr->value;
			ptr = ptr->next;
		}
		return;
	}

	void deleteatend()
	{
		Node* ptr = &obj;
		Node* last = nullptr;
		if (ptr == nullptr)
		{
			cout << endl << "List is empty";
			return;
		}

		while (ptr->next != nullptr)
		{
			cout << ptr->value;
			last = ptr;
			ptr = ptr->next;
		}
		delete last->next;
		return;
	}

}

int main()
{
	stuct LinkedList obj2;

	obj2.printlist();
	obj2.insertatend(1);
	obj2.insertatend(2);
	obj2.insertatend(3);
	obj2.insertatend(4);
	obj2.printlist();
	obj2.deleteatend();
	return 0;
}







