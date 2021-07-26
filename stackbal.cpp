#include<iostream>
using namespace std ;



int top = -1 ;
int const stack_size = 15;
int STACK[stack_size];



void push(int data);
void pop();
void display ();



int main ()
{
int i , data;
cout<< "How many data you want to push ?" ;
cin>> i ;
for (int j = 0; j<i ; j++)
{
cout<< "Enter data :";
cin>>data ;
push(data);

}
cout<<endl<< "Data list: "<<endl;
display ();
pop();
pop();
cout<<endl<< "Data List: "<<endl;
display();
return 0;
}
void push (int data)
{
if(top>=stack_size -1)
{
cout<< "Overflow: The stuck is full"<<endl;

}
else
{

STACK[top]=data;
top++;
}

}
void pop ()
{
if (top<0)
{
cout<<"underflow: The stuck is empty"<<endl;

}
else
{

top--;
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
cout<< "   "<<STACK[i];
}
