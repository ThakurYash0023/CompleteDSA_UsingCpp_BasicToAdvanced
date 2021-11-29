#include<iostream>
using namespace std;

bool isEven(int n)
{
    // if n&1==0 then n is odd
    if(n&1)
    {
        cout<<"Number is Odd \n";
        return 0;
    }
    else{
        cout<<"Number is Even \n";
        return 1;
    }
    
}

int main()
{
    int n;
    cout << "Enter the number \n";
    cin >> n;
    bool ans=isEven(n);
}