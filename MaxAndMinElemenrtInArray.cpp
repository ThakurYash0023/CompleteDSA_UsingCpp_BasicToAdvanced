#include<iostream>
using namespace std;

int getMax(int arr[],int n)
{
    int Max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(Max<arr[i])
        {
            Max=arr[i];
        }
    }
    return Max;
}

int getMin(int arr[],int n)
{
    int Min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(Min>arr[i])
        {
            Min=arr[i];
        }
    }
    return Min;
}

int main()
{
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    int arr[size];
    cout<<"Enter the elements of array" << endl;

    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    int Max= getMax(arr,size);
    int Min= getMin(arr,size);

    cout << "The Maximun element : " << Max << endl;
    cout << "The Minimum element : " << Min << endl;
}