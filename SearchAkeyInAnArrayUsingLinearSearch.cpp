#include<iostream>
using namespace std;

int searching(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    // let a list of interger already in the memory 
    int arr[10]={1,2,3,45,0,-9,27,89,65,87};
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    int found= searching(arr,10,key);

    if(found==10)
    {
        cout << "The key is Absent " << endl;
    }
    else
    {
        cout << "The key is Present at Index : " << found << endl;
    }
}