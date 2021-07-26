#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int i,j,v;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;

        while(j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=v;
    }
}

void binarySearch(int a[], int n, int item)
{
    int f=0;
    int l=n-1;
    int m;
    int position;
    bool found=false;

    while(!found && f<=l)
    {
        m=(f+l)/2;
        if(a[m]==item)
        {
            found=true;
            position=m;

        }
        else if(a[m]>item)
        {
            l=m-1;
        }
        else
        {
            f=m+1;
        }
    }
    if(found==true)
    {
        cout<<"Found in index "<<position<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}

int main()
{
    int n,i,value;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr,n);

    cout<<"Sorted Array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Enter item to be searched: ";
    cin>>value;
    binarySearch(arr,n,value);
}

