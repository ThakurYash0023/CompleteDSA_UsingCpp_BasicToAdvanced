#include<iostream>
using namespace std;

void isPrime(int n)
{
    bool flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        cout << "Number is not Prime \n";
    }
    else{
        cout << "Number is Prime \n";
    }

    return ;
}

int main()
{
    int n;
    cout << "Enter the number \n";
    cin >> n;

    isPrime(n);
}