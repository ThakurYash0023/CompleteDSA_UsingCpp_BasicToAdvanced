#include<iostream>
using namespace std;

int getSum(int arr[],int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of Array "<<endl;
    cin >> size;
    int arr[size];

    cout<<"Enter the elements of Array "<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int sum=getSum(arr,size);

    cout<<"The sum of Elements is : " <<sum <<endl;
}