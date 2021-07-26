#include<iostream>
using namespace std;
void B_sort(int arra[],int n)
{
            int select,i,temp;
            for(select=1;select<n;select++)
            {
                        for(i=0;i<n;i++)
                        {
                                    if(arra[i]>arra[i+1])
                                    {
                                                temp=arra[i];
                                                arra[i]=arra[i+1];
                                                arra[i+1]=temp;
                                    }
                        }
            }
}
int main()
{
   int n,i,arra[20];
   cout<<"How many element you want to insert:"<<endl;
   cin>>n;
   cout<<"Enter your "<<n<<" element here"<<endl;
   for(i=0;i<n;i++)
   {
     cin>>arra[i];
   }
   //cout<<"Your inputed elements are: ";
   //cout<<arra[i];//
   B_sort(arra,n);
   cout<<"Travarse of array is :"<<endl;
   for(i=0;i<n;i++)
   {
               cout<<arra[i];
   }

}
