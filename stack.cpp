// Stack Implementation using Array



#include <iostream> 

using namespace std;

class Stack
{
	private:
	int *arr;
	int top;
	int size;
	public:
	Stack();
	~Stack();
	 Stack(int);
	void push(int);
	int pop();
	int isEmpty();
	int isFull();
};

Stack::Stack()
{
}

Stack::~Stack()
{
	delete []arr ;
}

Stack::Stack(int x)
{
	size=x;
	arr=new int[size];
	top=-1;

}

void Stack::push(int x)
{
	if(isFull())
	{
		cout<<"\n Cannot push as Stack is Full \n" ;
	}
	else
	{
		top=top+1;
		arr[top]=x;
		cout<<x<<" has been pushed \n" ;
	}
}

int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"\nCannot pop as Stack is Empty \n";
	}
	else
	{
		cout<<arr[top]<<" has been popped\n";
		return arr[top--];
	
	}
}

int Stack::isEmpty()
{
	if(top == -1)
	{
		return 1;
	}	
	else
	{
		return 0;
	}
}

int Stack::isFull()
{
	if(top == size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}




int main()
{
	int size;
	cout << "Enter the Stack Size : " << endl ;
	cin >> size;
	cout<<endl;
	
	Stack s(size);
	s.push(3);
	s.push(4);
	s.pop();
	s.pop();
	s.pop();

 return 0;
}
