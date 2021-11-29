#include<iostream>
using namespace std;

int power(int a, int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b \n";
    cin>>a>>b;

    int c,d;
    cout<<"Enter the value of c and d \n";
    cin>>c>>d;

    int ans=power(a,b);
    cout<< "Answer is "<<ans<<endl;
    
    int ans1=power(c,d);
    cout<< "Answer is "<<ans1<<endl;
}