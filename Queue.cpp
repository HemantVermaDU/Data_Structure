
#include<iostream>

using namespace std;

#define SIZE 10

class Queue
{
	public:
    int a[SIZE];
    int rear;   //same as tail
    int front;  //same as head
  
    public:
    Queue()
    {
        rear = front = 0;
    }
    
    //declaring enqueue, dequeue and display functions
    void enqueue(int x);     
    int dequeue();
    void display();
};

// function enqueue - to add data to queue
void Queue :: enqueue(int x)
{
    if( rear == SIZE)
    {
        cout << "Queue is full";
    }
    else
    {
    	if(front == 0) 
    	{
    	    front=1;
    	}
    	rear+=1;
       	a[rear] = x;
	}
}

// function dequeue - to remove data from queue
int Queue :: dequeue()
{
	int y;
	if(front==0)
	{
		cout<<"\nQueue is empty!!";
	}
	else
	{
		y= a[front];
		if(front==rear)
			front=rear=0;
		else
			front+=1;
		return y;  // following approach [B], explained above
	}
}

// function to display the queue elements
void Queue :: display()
{
	if(front==0)
		cout<<"\nQueue is empty!!";
    int i;
    for( i = front; i <= rear; i++)
    {
        cout << a[i];
        if(i<rear) 
        	cout<< " <- ";
    }
}

// the main function
int main()
{
    Queue q;

    int t, ch;
	while(1)
	{
		cout<<"\nMenu:   front: "<<q.front<<"  rear: "<<q.rear;
		cout<<"\n1. Enqueue";
		cout<<"\n2. Dequeue";
		cout<<"\n3. Show Queue";
		cout<<"\n4. Exit";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter no. to insert: ";
					cin>>t;
					q.enqueue(t);
					break;
			case 2: if(q.front!=0)
						cout<<"element removed: "<<q.dequeue();
					else
						q.dequeue();
					break;
			case 3: if(q.front!=0)
						q.display();
					else
						cout<<"Queue is empty!!";
					break;
			case 4: break;
			default: cout<<"Wrong choice!!!";
						break;
		}
		if(ch==4)
			break;
	}
    
    return 0;
}
