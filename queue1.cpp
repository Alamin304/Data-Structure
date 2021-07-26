#include<iostream>
using namespace std;
#define Size 7

int arra[Size];
int front=-1;
int rear=-1;
int noE=0;
void enqueue(int x)
{

                        rear++;
                        arra[rear]=x;
                        if(front==-1)
                        front++;
                        noE++;

}
void dequeue()
{

                        int x=arra[front];
                        front++;
                        noE--;

}
void display(){

        int i;
        cout<<"\nQueue elements are:\n";
        for(i=front; i<=rear; i++)
            cout<<arra[i];

}
int main()
{

    dequeue();//
     dequeue();
    //enQueue 5 elements
    enqueue(1);
    enqueue(2);
    dequeue();
    enqueue(3);
    enqueue(4);
    enqueue(5);

    //6th element can't be added to queue because queue is full
    enqueue(6);

    display();//

    //deQueue removes element entered first i.e. 1


    //Now we have just 4 elements

}


