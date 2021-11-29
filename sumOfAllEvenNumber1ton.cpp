#include<iostream>
using namespace std;

int main()
{
    int n;  // till where you want sum
    int sum=0;

    cout<<"Enter the value of n \n";
    cin>>n;
    int i=2;

    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i=i+2;
    }
    cout<<"Sum of All Even Number till "<<n<< " is : "<<sum;
    cout<<endl;
}