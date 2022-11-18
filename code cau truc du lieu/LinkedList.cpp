#include<iostream>
using namespace std;

struct  Linkedlist
{
	int data;
	struct Linkedlist *next;
};

typedef struct Linkedlist *node;

node CreateNode(int value) // tao node
{
	node temp;
	temp = new node(); // khai bao mot node
//	temp = (node)malloc(sizeof(struct LinkedList)); //malloc cap phat vung nho
	temp->next = NULL; // cho next tro den NULL
	temp->data = value; // gan gia tri cho node
	return temp; // tra ve node moi da co gia tri
}

node InitHead() // khoi tao node head
{
	node head;
	head = NULL;
	return head;
}
node AddHead(node head, int value) // them node vao dau danh sach
{
	node temp = CreateNode(value); // khoi tao node temp voi data = value
	if(head == NULL)
		head = temp; // neu linked list trong thi node temo la head luon
	else
	{
		temp->next = head; // tro next cua temp = head hien tai
		head = temp; // doi head hien tai = temp
	}
	return head;
}

node AddTail(node head, int value)
{
	node temp, p; // khai bao 2 node tam temp va p
	temp = CreateNode(value); // khoi tao node temp co next tro toi NULL va gia tri value
	
	if(head == NULL)
		head = temp;
	else
	{
		p = head;
		while(p->next != NULL)
		{
			p = p->next; //duyet danh sach den cuoi
		}
		p->next = temp; // gan next cua p bang temp, khi do temp se la phan tu cuoi cung
	}
	
	return head;
}

node AddAt(node head, int value, int position)
{
	if(position == 0 || head == NULL)
		head == AddHead(head, value); // neu vi tri chen la 0 tuc la chen vao dau
	else
	{ // tim vi tri can chen
		int k = 1;// vi tri
		node p = head;
		while(p != NULL && k != position)
		{
			p = p->next;
			k++;
		}
	}
	
	if(k != position)
		head = AddTail(head, value); // neu duyet het ma khong thay vitri can chen, mac dinh la chen cuoi
	else
	{
		node temp = CreateNode(value);
		temp->next = p->next;
		p->next = temp;
	}
	return head;
}

node DelHead(node head) // xoa dau
{
	if(head == NULL)
		cout << "nothing to delete!" << endl;
	else
		head = head->next;
	return head;
}

node DelTail(node head) // xoa cuoi
{
	if(head == NULL || head->next == NULL)
	{
		return DelHead(head);
	}
	
	node p = head;
	while(p->next->next != NULL)
		p = p->next;
	p->next = NULL; 
	
	return head;
}

node DelAt(node head, int position) // xoa o vi tri bat ky
{
	if(position == 0 || head == NULL || head->next == NULL)
		head = DelHead(head);
	else
	{
		int k = 1;
		node p = head;
		while(p->next->next != NULL && k != position)
		{
			p = p->next;
			k++;
		}
		
		if(k != position)
		{
			head = DelTail(head);
		}
		else
		{
			p->next = NULL;
		}
	}
	return head;
}

int Get(node head, int index) // lay gia tri o vi tri bat ky
{
	int k = 0;
	node p = head;
	while(p->next != NULL && k != index)
	{
		k++;
		p = p->next;
	}
	return p->next;
}

int Search(node head, int value)
{
	int position = 0;
	for(node p = head; p != NULL; p = p->next)
	{
		if(p->data == value)
			return position;
		position++;
	}
	
	return -1;
}

void Traverser(node head) // duyet danh sach lien ket
{
	for(node p = head; p != NULL; p = p->next)
		cout << p->data << "   ";
}

node Input()
{
	node head = InitHead();
	int n, value;
	
	do
	{
		cout << "Nhap so luong phan tu n = "; cin >> n;
	}while(n <= 0);
	
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri can them: "; cin >> value;
		head = AddTail(head, value);
	}
	
	return head;
}

int main()
{
	cout << "=======Tao mot danh sach lien ket=======";
	node head = Input();
	Traverser(head);
}

