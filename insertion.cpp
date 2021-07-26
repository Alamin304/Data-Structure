#include<iostream>
using namespace std;
int main()
{
            int ara[50],n,i,k,value;
            cout<<"Eunter the number of element : "<<" ";
            cin>>n;
            cout<<"Enter the element you want to add here :"<<endl;
            for(i=0;i<n;i++)
            {
                        cin>>ara[i];
            }
            cout<<"Your entered elements are :";
            for(i=0;i<n;i++)
            {
                        cout<<ara[i]<<" ";
            }
            cout<<endl;

            cout<<"Enter the position you want to add"<<endl;
            cin>>k;

            cout<<"Enter the value "<<endl;
            cin>>value;
            for(i=n-1;i>=k-1;i--)
            {
                        ara[i+1]=ara[i];
            }
            ara[k]=value;
            n--;
            cout<<"After insertion the array is "<<" ";
            for(i=0;i<=n;i++)
            {
                        cout<<ara[i]<<" ";
            }
            return 0;

}
