// calculate the number of set bits in a and b

#include<iostream>
using namespace std;

unsigned int SetbitCount(int a,int b)
{
    unsigned int count=0;

    while(a!=0 || b!=0)
    {
        if(a&1==1)
        {
            count++;
        }
        a=a>>1;

        if(b&1==1)
        {
            count++;
        }
        b=b>>1;

    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a  and b  "<<endl;
    cin>>a>>b;
    
    unsigned int count=SetbitCount(a,b);
    cout<<"The number of Set bits are : "<<count<<endl;
}