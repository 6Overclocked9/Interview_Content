#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
	Node() :next(nullptr) {};
};

void insertatend(Node** ptr, int value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->next = nullptr;

	Node* traverse = *ptr;

	if (traverse == nullptr)
	{
		*ptr = temp;
		return;
	}

	while (traverse->next != nullptr)
	{
		traverse = traverse->next;
	}

	traverse->next = temp;
	return;
}

void deleteatend(Node** ptr)
{
	Node* traverse = *ptr;

	if (traverse == nullptr)
	{
		cout << "empty list";
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

void display(Node** ptr)
{
	Node* traverse = *ptr;
	if (traverse == nullptr)
	{
		cout << "empty list ";
		cout << endl;
		return;
	}

	while (traverse != nullptr)
	{
		cout << traverse->data << " ";
		traverse = traverse->next;
	} 
	
	cout << endl;
	return;
}


int main()
{
	struct Node* obj = nullptr;

	display(&obj);

	insertatend(&obj, 10);

	insertatend(&obj, 20);

	insertatend(&obj, 30);

	display(&obj);
	
	deleteatend(&obj);

	display(&obj);

	return 0;
}
