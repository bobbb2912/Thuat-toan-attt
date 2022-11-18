#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int value)
	{
		data = value;
		left = NULL;
		right = NULL;
	}
};

Node* CreateNode(int data)
{
	Node* newNode = new Node();
	if(!newNode)
	{
		cout << "Memory error\n";
		return NULL;
	}
	newNode->data = data
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* InsertNode(Node* root, int data)
{
	if(root == NULL)
	{
		root = CreateNode(data);
		return root; 
	}
	
}

int main()
{
	struct Node* root;
	root.data = 1;
	root->left = new Node(2);
	root->right = new Node(3);
	
	root->left->left = new Node(4);
	return 0;
}
