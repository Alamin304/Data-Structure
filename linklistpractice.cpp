#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*nodeptr;
nodeptr head=NULL,curr;

void adddata(int item)
{
nodeptr nnode=new listnode;
nnode->data=item;
nnode->next=NULL;
if(head==NULL)
    {
    head=nnode;
    }
else
{
curr->next=nnode;
}
curr=nnode;
}
searching(int item)
{
    nodeptr ptr=head;
    while(ptr->data!=item&&ptr->next!=NULL)
    {
        ptr=ptr->next;
        if(ptr->data==item)
        {
            cout<< item<< "found it";
        }
        else
            cout<< "not found";
    }

}
insertbegin(int item)
{
nodeptr nnode= new listnode;
nnode->data =item;
nnode->next=head;
head=nnode;
}
void insertanymid(int item ,int select)
{
 nodeptr nnode=new listnode;
 nnode->data=item;
 nodeptr ptr=head;
 while(ptr->data!=select&&ptr->next!=NULL)
 {
     ptr=ptr->next;
 }
 if (ptr->data=select)
 {
    nnode->next=ptr->next;
    ptr->next=nnode;
 }
 else{
      cout<< select<<"is not found";

      }

}
void insertend(int item)
{
    nodeptr nnode = new listnode;
    nnode->data=item;
    nnode->next=NULL;
    if(head==NULL)
    {
        head=nnode;
    }
else
    {
        curr=head;
while(curr->next!=NULL)
{
    curr=curr->next;
}
curr->next=nnode;

    }
}
deletfirst(nodeptr ptr)
{

    head=ptr->next;
    delete (ptr);

}
deletemiddle(int item)
{
    nodeptr ptr,dptr;
    ptr=head;
    if(ptr->next->data!=item&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    dptr=ptr->next;
    ptr->next=dptr->next;
    delete(dptr);
}
deletelast()
{
    nodeptr ptr=head,dptr;
    if(ptr->next->next!=NULL)
    {
    ptr=ptr->next;
    dptr=ptr->next;
    ptr->next=NULL;
    delete(dptr);
    }


}
void display(nodeptr ptr)
{
    while(ptr!=NULL)
    {
        cout << ptr->data << " ";
	     ptr = ptr->next ;

    }
    cout << endl;
}
int main()
{int item,select,node;
cout<<"enter your node number";
cin>>node;
cout<< "enter your value";
for(int i=1;i<=node;i++)
  {
cin>> item;
adddata(item);
  }
display(head);
cout<<"enter which number you want to add anymid";
cin>> item;
cout<<"enter where you want to insert after which number";
cin>> select;

insertanymid(item ,select);
display(head);
cout<<"which number you want to insert al the end";
cin>> item;
insertend(item);
display(head);
cout << "delete first";
deletfirst(head);
display(head);
cout<< "which number you want to delete";
cin>> item;
deletemiddle(item);
display(head);
cout<<"delete last item";
deletelast();
display(head);
cout<<"enter which number you want search";
cin>> item;
searching(item);


}
