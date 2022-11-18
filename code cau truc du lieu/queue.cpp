#include<iostream>
#include<string>
using namespace std;

void Enqueue(char queue[], char element, int& rear, int arrsize)
{
	if(rear == arrsize)
		cout << "OverFlow" << endl; // queue is full
	else
	{
		queue[rear] = element; // them phan tu va cuoi hang doi
		rear++;
	}	
}

void Dequeue(char queue[], int& front, int rear)
{
	if(front == rear) // queue is empty
		cout << "Underflow"; 
	{
		queue[front] = 0; // xoa phan tu dau tien 
		front++; 
	}
}

char Front(char queue[], int front)
{
	return queue[front]; //tra ve phan tu dau cua queue
}

int main()
{
	char queue[20] = {'a', 'b', 'c', 'd'};
	int front = 0, rear = 4;
	int arrsize = 20;
	int N = 3;
	char ch;
	for(int i = 0; i < N; i++)
	{
		ch = Front(queue, front); // tra ve phan tu dau cua queue
		Enqueue(queue, ch, rear, arrsize); // them vao cuoi queue
		Dequeue(queue, front, rear);  // xoa phan tu dau cua queue
	}
	
	for(int i = front; i < rear; i++)
	{
		cout << queue[i];
	}
	cout << endl;
	
	return 0;
}
