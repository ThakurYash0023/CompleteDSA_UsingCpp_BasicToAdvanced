#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if((i+1)<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    printArray(arr,n);
}

int main()
{
       int size;
       cout<<"Enter the size of Array "<< endl;
       cin >> size;
       int arr[size];

       cout<<"Enter the element of Array "<<endl;


       for(int i=0;i<size;i++)
       {
           cin>>arr[i];
       }

       swapAlternate(arr,size);
}