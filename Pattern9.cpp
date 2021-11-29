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
        int start=i;
        while (col<=i)
        {
            
            cout<<start;
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
}