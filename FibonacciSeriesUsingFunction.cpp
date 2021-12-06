#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int a=0;
    int b=1;
    int sum;
    cout<<a << " "<<b<< " ";
    for(int i=0;i<n-1;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}

int main()
{
    
    int n;

    cout<<"Enter the value of n "<<endl;
    cin>>n;

    cout<<"The fibonacci Series "<<endl;

    fibonacci(n);

}