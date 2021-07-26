#include<iostream>
using namespace std;
void push(int element);
int pop();
void peak();
void poll();
int isFull();
int isEmpty();
#define CAPACITY 5 //PRE PROCESSOR
int stack[CAPACITY];
int top=-1;
int main()
{
 int choice;
 int item;
 while(1)
 {
  cout<<"press 1 for PUSH Element "<<endl;
  cout<<"press 2 for pop the Element "<<endl;
  cout<<"press 3 The Top Most Element"<<endl;
  cout<<"Press 4 for Displaying Stack"<<endl;
  cout<<"Press 5 For quit  "<<endl;
  cout<<"Enter your Choice "<<endl;
  cin>>choice;
  switch(choice)
  {
  case 1:
   {
    cout<<"Enter the Element Which you want to push"<<endl;
    cin>>item;
    push(item);
    break;
   }
  case 2:
   {
    item=pop();
    if(item==0)
    {
     cout<<"Stack is Empty"<<endl;
    }
    else
    {
     cout<<"POPed item is "<<item<<endl;
    }

    pop();
    break;

   }
  case 3:
   {
    peak();
    break;
   }
  case 4:
   {
    poll();
    break;
   }

  default:
   {
    cout<<"Wrong Input"<<endl;

   }
   }


 }

}

void push(int element)
{
 if(isFull())
 {

  cout<<"stack is full"<<endl;

 }
 else
 {
  top++;
  stack[top]=element;
  cout<<"Element is pushed"<<element<<endl;
 }
}
int isFull( )
{
 if(top==CAPACITY-1)
 {
  cout<<"Stack is Already Full"<<endl;

 }
 else
 {
  cout<<"Stack is not full";
 }

}
int pop()
{
 if(isEmpty())
 {
   cout<<"stack is empty"<<endl;
 }
 else
 {
   return stack[top--];

 }

}
void peak()
{
 if(isEmpty())
 {
  cout<<"Stack is empty"<<endl;
 }
 else
 {
  cout<<"the top element of stack is"<<stack[top]<<endl;
 }



}
void poll()
{
 cout<<"Stack Elements Are "<<endl;
 for(int i=0;i<=top;i++)
 {
  cout<<stack[i]<<endl;
 }

}﻿
