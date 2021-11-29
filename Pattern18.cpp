#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the rows \n";
    cin>>row;

    int i=1;
    
    while(i<=row)
    {
        int col=1;
        int j=1;
        while(col<=i)
        {
            char ch='A'+row+j-1-i;
            cout<<ch;
            j=j+1;
            col=col+1;
        }
        cout<<endl;
        i=i+1;
    }
}