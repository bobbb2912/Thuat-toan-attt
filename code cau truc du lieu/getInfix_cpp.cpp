#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

class Stack {
	int top;

public:
	string a[MAX];
	Stack() {
		top = -1;
	}
	
	string push(string x);
	string pop();
	bool isEmpty(); 
};

string Stack::push(string x)
{
	if(top >= (MAX - 1))
	{
		cout << "Stack Overflow!";
		return 0;
	}
	else
	{
		a[++top] = x;
		return x;
	}
}

string Stack::pop()
{
	if(top < 0)
	{
		cout << "Stack is Empty";
		return 0;
	}
	else
	{
		string x = a[top--];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

bool isOperand(char x)
{
	return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

string getInfix(string exp)
{
	string s;
	class Stack stack;
	for(int i = 0; exp[i] != NULL; i++)
	{
		if(isOperand(exp[i]))
		{
			string op(1, exp[i]);
			stack.push(op);
		}
		else
		{
			string op1 = stack.pop();
			string op2 = stack.pop();
			stack.push("(" + op2 + exp[i] + op1 + ")");
		}
		
	}
	return stack.pop();
}

int main()
{
	string exp = "abc**c+";
	cout << getInfix(exp);
	return 0;
}

















