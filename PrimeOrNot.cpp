#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter number a \n";
    cin>>a;

    int i=2;
    while (i<a)
    {  // divide ho gya toh not prime otherwise prime
        if(a%i==0)
        {
            cout<<"Not Prime for"<<i<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i=i+1;
    }
    
     
}