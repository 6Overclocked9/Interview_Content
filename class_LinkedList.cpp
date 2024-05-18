#include<iostream>

using namespace std;

class Node {
public:	
	int data;
	Node* next;
	Node() :data(0),next(nullptr) {};
};

class LinkedList
{
public:
	Node* head;

	LinkedList()
	{
		head = nullptr;
	}

	void insertatend(int value);

	void display();

	void deleteatend();

};

void LinkedList::insertatend(int value)
{
	Node* traverse = head;

	Node* temp = new Node;

	temp->data = value;
	temp->next = nullptr;

	if (traverse == nullptr)
	{
		head = temp;
		return;
	}

	while (traverse->next != nullptr)
	{
		traverse = traverse->next;
	}

	traverse->next = temp;
	return;
}

void LinkedList::display()
{
	Node* traverse = head;

	if (traverse == nullptr)
	{
		cout << " list is empty ??" << endl;
			return;
	}

	while (traverse!= nullptr)
	{
		cout << traverse->data << " ";
		traverse = traverse->next;
	}
	cout << endl;

	return;
}

void LinkedList::deleteatend()
{
	Node* traverse = head;

	if (traverse == nullptr)
	{
		cout << " list is empty ??" << endl;
		return;
	}

	while (traverse->next->next != nullptr)
	{
		traverse = traverse->next;
	}

	delete traverse->next;

	traverse->next = nullptr;
	return;
}


int main()
{
	LinkedList obj;

	obj.display();

	obj.insertatend(10);

	obj.insertatend(20);

	obj.insertatend(30);

	obj.insertatend(40);

	obj.display();

	obj.deleteatend();

	obj.deleteatend();

	obj.display();
	
	return 0;
}