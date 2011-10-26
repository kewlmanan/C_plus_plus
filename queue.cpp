// Queue Implementation using array
 
#include <iostream> 

using namespace std; 

class Queue
{
	private:
	int front;
	int rear;
	int size;
	int *arr;
	
	public:
	Queue();
	~Queue();
	Queue(int);
	void enqueue(int);
	int dequeue();
	int isEmpty();
	int isFull();
	
};

Queue::Queue()
{
}

Queue::~Queue()
{
	delete [] arr;
}


Queue::Queue(int x)
{
	front=-1;
	rear= -1;
	size=x;
	arr =new int[size];
}

void Queue::enqueue(int x)
{
	if(isFull())
	{	
		
		cout<<"Cannot enqueue as queue is full\n";
	}
	else
	{
		rear++;
		arr[rear]=x;
		cout<<x<<" was enqueued\n";
	}
}

int Queue::dequeue()
{
	if(isEmpty())
	{	
		cout<<"Cannot dequeue as queue is empty\n";
	}
	else
	{
		front++;
		cout<<arr[front]<<" was dequed\n";
		return arr[front];
	}
	
}


int Queue::isEmpty()
{
	if (front==rear)
	{	
		return 1;
	}
	return 0;
}
	

int Queue::isFull()
{
	if(rear==size-1)
	{
		return 1;
	}
	return 0;
}


int main()
{
	int size;
	cout<<"Enter Queue Size :\n";
	cin>>size;
	
	Queue q(size);
	
	q.enqueue(2);
	q.enqueue(3);
	q.dequeue();
	q.dequeue();
	q.dequeue();

	return 0;
}
