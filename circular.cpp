#include <iostream>
using namespace std;
#define size 7

int Queue[size];
int front=0,rear=0;
int NoE=0;

void enqueue(int x)
{
if(NoE==size)
cout<<"Queue is Full"<<endl;
else
{
Queue[rear]=x;
rear=(rear+1)%size;
NoE++;
}
}

void dequeue()
{
if(NoE==0)
cout<<"Queue is Empty"<<endl;
else
{
front=(front+1)%size;
NoE--;
}
}

void display()
{
if(NoE==0)
cout<<"Queue is Empty"<<endl;//Cause there is no element here 
else
{
for(int j=0;j<size;j++)
{
if(front<rear)
{
if(j>=front && j<rear)
cout<<Queue[j]<<" ";
cout<<" ";
}
else
{
if(j>=front || j<rear)
cout<<Queue[j]<<" ";
else
cout<<" ";
}
}
}
}

int main()
{
int n, data;
cout<<"How many data to enqueue: ";
cin>>n;
cout<<"Enter data: ";
for(int i=0;i<n;i++)
{
cin>>data;
enqueue(data);
}
cout<<"Data List: ";
display();
cout<<endl<<"Dequeue some data."<<endl;
dequeue();
dequeue();
dequeue();
cout<<"After dequeue data List: ";
display();
cout<<endl<<"Enqueue data:";
cin>>data;
enqueue(data);
cout<<"Enqueue data:";
cin>>data;
enqueue(data);
cout<<"Data List: ";
display();
}
