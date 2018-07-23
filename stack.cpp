#include<iostream>
#include<cstdio>
using namespace std;
/*
	linked_list stack

	push() - full?
	pop() - empty?
*/
typedef struct node
{
	int data;
	struct node * prev;
}node;

typedef struct stack
{
	node*head=NULL;
	node*tail=NULL;

	void push(int a)
	{
		struct node* new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data = a;
		if (head == NULL)
		{
			head = new_node;
			tail = new_node;
			tail = NULL;
			new_node->prev = NULL;
		}
		new_node->prev = tail;
		tail = new_node;
	}

	void pop()
	{
		if (tail == NULL)
		{
			cout << "ERROR" << endl;
			return;
		}
		tail = tail->prev;
	}

	int top()
	{

		return tail->data;
	}
}stack;

int main()
{
	stack st;
	st.pop();
	for (int i = 0; i < 10; i++)
		st.push(i);

	cout << st.top() <<endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	return 0;
}
