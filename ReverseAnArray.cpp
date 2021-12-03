#include<iostream>
using namespace std;

void printingArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void reversingArray(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        end--;
        start++;
    }
}

int main()
{
    int n;
    cout << "Enter the Size of Array "<< endl;
    cin >> n;

    int arr[n];
    cout<<"Enter the element in Array "<< endl;
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<<"The original Array is "<< endl;
    printingArray(arr,n);

    cout <<"The Reversed Array is " << endl;
    reversingArray(arr,n);
    printingArray(arr,n);
}