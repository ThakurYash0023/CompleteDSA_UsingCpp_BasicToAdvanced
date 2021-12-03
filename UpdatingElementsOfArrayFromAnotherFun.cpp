#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    arr[0]=120;
}

int main()
{
    int size;
    cout << "Enter the size of Array " << endl;
    cin >> size;
    int arr[size];

    cout << "  Enter the Elements of Array"<< endl;

    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cout<<endl;

    //Printing the array from the main function Before the updation

    cout <<"Before the updation "<< endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i]<< " ";
    }
    cout<<endl;

    update(arr,size);

    //Printing the array from the main function after the updation

    cout <<"After the updation "<< endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i]<< " ";
    }
}