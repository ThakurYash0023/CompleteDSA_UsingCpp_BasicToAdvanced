#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum of number is : "<<sum<<endl;
}
