/* here we will use the formula to get the value of nCr
,nCr=fact(n)/fact(r)*fact(n-r),, and we will make two 
function here : factorial and nCr */

// input will be n and r

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    int ans=1;

    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}


int nCr(int n, int r)
{
    int numerator=factorial(n);
    int demonator=factorial(r)*factorial(n-r);

    int ans=numerator/demonator;

    return ans;
}

int main()
{
    int n,r;
    cout<<"Enter the value of n and r \n";
    cin>>n>>r;

    

    int ans=nCr(n,r);
    cout << "Answer is " << ans << endl;
}