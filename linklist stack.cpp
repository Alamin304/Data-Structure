#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*nodeptr;
nodeptr head=NULL,curr;

top(int item)
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
pop(nodeptr ptr)
{
  nodeptr dptr;
    while(ptr->next->next!=NULL)
    {
    ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=NULL;
    delete(dptr);

}
display(nodeptr ptr)
{
    while(ptr!=NULL)
    {   cout<< ptr->data<<"";
        ptr=ptr->next;
    }
}
int main()
{    int item;
    top(55);
    top(66);

    pop(head);
display(head);

}
