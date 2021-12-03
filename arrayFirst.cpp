// checking all types of array with function

#include<iostream>
using namespace std;

void printingCharArray(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
}

void printingDoubleArray(double arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
}

void printingFloatArray(float arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
}

void printingBoolArray(bool arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main()
{
    char arr[5]={'a','b','c','d','e'};
    double arr1[5]={1.33,3.33,4.55,6.77,8};
    float arr2[5]={1.2,3.4,5.6,7.8,9};
    bool arr3[5]={1,0,0,1,1};

    cout<<"Printing Character Array "<<endl;
    printingCharArray(arr,5);

    cout<<"Printing Double Array "<<endl;
    printingDoubleArray(arr1,5);

    cout<<"Printing Float Array "<<endl;
    printingFloatArray(arr2,5);

    cout<<"Printing bool Array "<<endl;
    printingBoolArray(arr3,5);
}