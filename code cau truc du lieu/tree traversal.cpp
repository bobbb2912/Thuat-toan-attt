#include<iostream>
using namespace std;

struct Node {
	char data;
	struct Node *left, *right;
	
	Node(char value)
	{
		data = value;
		left = right = NULL;
	}
};

void Preorder(struct Node* node)
{
	if(node != NULL)
	{
		cout << node->data << " ";
		Preorder(node->left);
		Preorder(node->right);
	}
}

void Inorder(struct Node* node)
{
	if(node != NULL)
	{
		Inorder(node->left);
		cout << node->data << " ";
		Inorder(node->right);
	}
}

void Postorder(struct Node* node)
{
	if(node != NULL)
	{	
		Preorder(node->left);
		Preorder(node->right);
		cout << node->data << " ";
	}
}

int main()
{
	struct Node* root = new Node('A');
	root->left = new Node('B');
	root->right = new Node('C');
	root->left->left = new Node('D');
	root->left->right = new Node('E');
	root->right->left = new Node('F');
	root->right->right = new Node('G');
	
	
	cout << "Preorder: \n";
	Preorder(root);
	cout << "\nInorder: \n";
	Inorder(root);
	cout << "\nPostorder: \n";
	Postorder(root);
}
