#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the rows \n";
    cin>>row;

    int i=1;
    while (i<=row)
    {
        int col=1;
        while (col<=i)
        {
            cout<<" * ";
            col=col+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
}