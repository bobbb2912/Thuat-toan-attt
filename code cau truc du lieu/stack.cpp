#include<iostream>
using namespace std;

int capacity, top;

bool IsFull(int n) // kiem tra ngan xep day
{
	if(top >= n-1)
		return true;
	else
		return false;
}

bool IsEmpty() // kiem tra ngan xep rong
{
	if(top == -1)
		return true;
	else
		return false;
}

void Push(int stack[], int value, int capacity) // day phan tu vao stack
{
	if(IsFull(capacity) == true)
		cout << "Stack is full. Overflow condition!";
	else
	{
		top++;
		stack[top] = value;
	}
}

void Pop()
{
	if(IsEmpty() == true)
		cout << "Stack is empty. Underflow condition.";
	else
	{
		--top;
	}
}

int Top(int stack[])
{
	return stack[top]; // tra ve phan tu tren cung cua stack
}

int Size()
{
	return top+1;
}

int main()
{
	capacity = 3;
	top = -1;
	int stack[capacity];
	
	//pushing element 5 in the stack
	Push(stack, 5, capacity);
	cout << "Current size of stack is " << Size() << endl;
	Push(stack, 10, capacity);
	Push(stack, 24, capacity);
	cout << "Current size of stack is " << Size() << endl;
	Push(stack, 12, capacity);
	cout << "Current size of stack is " << Size() << endl;

	for(int i = 0; i < 3; i++)
	{
		Pop();
	}
	cout << "Current size of stack is " << Size() << endl;
	Pop();
	return 0;

}
