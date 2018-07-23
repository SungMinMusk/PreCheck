#include<iostream>
#include<cstdio>
using namespace std;

bool is_nth_bit_one(int n,int nth)
{
	return ((n >> nth-1) & 1);
}
int main()
{
	int a = 11;
	int n = 1;
	cout << n << "th bit is " << is_nth_bit_one(a,n) << endl;

	return 0;
}
