#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the row \n";
    cin>>row;

    int i=1;
    int j=1;
    while(i<=row)
    {
        while(j<=row)
        {
            if(j<=(row-i))
            {
                cout<<" ";
                j=j+1;
            }
            else
            {
                cout<<" * ";
                j=j+1;
            }
            
        }
        cout<<endl;
        i=i+1;
    }
}