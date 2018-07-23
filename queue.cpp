#include<iostream>
#include<cstdio>
using namespace std;
/*
	linked_list queue

	node정의
	-next;
	-prev;

	queue정의
	-head;
	-tail;

	push() - full?
	pop() - empty?
*/
typedef struct node
{
	int data;
	struct node * next;
}node;

typedef struct queue
{
	node*head=NULL;
	node*tail=NULL;

	void push(int a)
	{
		struct node* new_node = new node;
		new_node->data = a;
		new_node->next = NULL;

		if (isempty())
		{
			head = new_node;
			tail = new_node;
		}

		tail->next = new_node;
		tail = new_node;
	}

	void pop()
	{
		if (isempty())
		{
			cout << "ERROR" << endl;
			return;
		}
		else if  (head == tail)
		{
			head = NULL;
			tail = NULL;
			return;
		}
		head = head->next;
	}

	int top()
	{
		if (isempty())
			return -1;

		return head->data;
	}

	bool isempty()
	{
		if (head == NULL && tail == NULL)
			return 1;
		return 0;
	}
}queue;

int main()
{
	queue q;
	q.pop();
	for (int i = 0; i < 10; i++)
		q.push(i);

	for (int i = 0; i < 10; i++)
	{
		cout << q.top() << endl;
		q.pop();
	}
	q.push(10);
	cout << q.top() << endl;
	q.pop();
	q.pop();
	
	return 0;
}
