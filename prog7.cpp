 
#include <dos.h>           // for sleep()
#include <iostream.h>     // for I/0
#include <windows.h>     // for MessageBox() API
#include <conio.h>
 
 
#define MAX 10        // MAXIMUM STACK CONTENT
 
 
template <class T>    // Using Templates so that any type of data can be
               // stored in Stack without multiple defination of class
class stack
{
 
 
  protected:
 
 
  T arr[MAX];       // Contains all the Data
 
 
  public:
    T item,r;
    int top;        //Contains location of Topmost Data pushed onto Stack
  stack()         //Constructor
   {
    for(int i=0;i<max;i++)
   {
     arr[i]=NULL;             //Initialises all Stack Contents to NULL
   }
 
 
    top=-1;      //Sets the Top Location to -1 indicating an empty stack
   }
 
 
 void push(T a)  // Push ie. Add Value Function
  {
  top++;        // increment to by 1
  if(top<max)
   {
   arr[top]=a;          //If Stack is Vacant store Value in Array
   }
   else    // Bug the User
   {
   MessageBox(0,"STACK IS FULL","STACK WARNING!",MB_ICONSTOP);
   top--;
   }
  }
 
 
 T pop()                  // Delete Item. Returns the deleted item
  {
  if(top==-1)
  {
   MessageBox(0,"STACK IS EMPTY\n","WARNING",MB_ICONSTOP);
   return NULL;
  }
  else
  {
   T data=arr[top];     //Set Topmost Value in data
   arr[top]=NULL;       //Set Original Location to NULL
   top--;               // Decrement top by 1
   return data;         // return deleted item
  }
  }
};
 
 
 
void main()
{
 stack <int>a;    // Create object of class a with int Template
 int opt=1;
 while (opt!=3)
 {
 clrscr();
 cout<<" MAX STACK CAPACITY="<<((MAX-a.top)-1)<<"\n\n\n\n";
 cout<<"1) Push Item\n";
 cout<<"2) Pop Item\n";
 cout<<"3) Exit\n\n";
 cout<<"Option?";
 cin>>opt;
 switch(opt)
 {
  case 1:
  cout<<"Which Number should be pushed?";
  cin>>a.item;
  a.push(a.item);
  break;
 
 
  case 2:
  a.r=a.pop();
  cout<<"Item popped from Stack is:"<<a.r<<endl;
  sleep(2);
  break;
 }
 }
 }