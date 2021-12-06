// since the given AP is 3*n+7

#include<iostream>
using namespace std;

int APFun(int n)
{
    int value =((3*n)+7);

    return value;
}

int main()
{
    int n;
    cout<<"Enter the number which term you want "<< endl;
    cin >>n;

    int Value= APFun(n);

    cout<<"The Nth Term value is : "<<Value<<endl;
}