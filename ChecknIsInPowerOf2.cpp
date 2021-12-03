#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the n "<<endl;
    cin >> n;

    // now we have to count '1' bit if it is-1 then power of 2 otherwise not 
    int count=0;

    for(int i=0;i<32;i++)
    {
        if(n&1==1)
        {
            count++;
        }
        n=n>>1;
    }
    if(count==1)
    {
        cout<<"Number is in power of 2 "<< endl;
    }
    else{
        cout<<"Not in power of 2 "<<endl;
    }
}