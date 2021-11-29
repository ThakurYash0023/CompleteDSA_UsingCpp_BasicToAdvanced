#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the rows \n";
    cin>>row;
    int i=1;
    int j=1;

    while (i<=row)
    {
        int col=1;
        while(col<=row)
        {
            cout<<" "<<j;
            col=col+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}