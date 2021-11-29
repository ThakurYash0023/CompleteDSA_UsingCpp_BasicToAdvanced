#include<iostream>
using namespace std;

void counting(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout << i << endl;
    }
    return ;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Counting are : \n";
    counting(n);
    cout << endl;
}