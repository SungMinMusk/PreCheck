#include<iostream>
#include<cstdio>
using namespace std;
/* Array interface 

	int data[];
	int len;

	add() - full add? 
	delete() - empty delete?
	contains() - 1 or 0
	find() - return index; 
	size() - return len
*/
const int MAX = 5;
class Array
{
private:
	int data[MAX];
	int len = 0;

public:
	void Add(int a)
	{
		if (len >= MAX) cout << "FULL" << endl;
		else 
		{ 
			data[len++] = a; 
			cout << "ADD : " << a << endl;
		}
	}
	void Delete(int a)
	{
		if (len <= 0) 
		{ 
			cout << "EMPTY" << endl; 
			return; 
		}
		for (int i = 0; i < len; i++)
		{
			if (data[i] == a)
			{
				for (int j = i; j < len-1; j++)
				{
					data[j] = data[j + 1];
				}
				len--;
				return;
			}
		}
		cout << "NO ITEM" << endl;
	}
	int Find(int a)
	{
		for (int i = 0; i < len; i++)
			if (data[i] == a)
				return i;
		return -1;
	}
	bool Contains(int a)
	{
		bool res=0;
		if (Find(a)) return 1;
		return res;
	}
	int Size()
	{
		return len;
	}
};
int main()
{
	Array A;
	A.Delete(3);
	for (int i = 0; i < 5; i++)
		A.Add(i);
	cout << A.Size() << endl;
	cout << A.Find(3) << " " << A.Find(4) <<endl;
	A.Delete(3);	
	cout << A.Find(3) << " " << A.Find(4) << endl;
	A.Delete(3);
	return 0;
}
