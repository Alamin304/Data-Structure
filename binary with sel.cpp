#include <iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
            int i,n,loc,Min;
            for(int i=0;i<n-1;i++)
            {
                        Min = arr[i];
                        loc=i;
            }
            for(int j= i+1;j<n;j++)
            {
                        if(arr[j]<Min)
                        {
                                    Min=arr[j];
                                    loc=j;
                        }
            }
            int temp;
            temp = arr[i];
            arr[i]=arr[loc];
            arr[loc]=temp;
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

    selectionsort(arr,n);

    cout<<"Sorted Array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Enter item to be searched: ";
    cin>>value;
    binarySearch(arr,n,value);
}

