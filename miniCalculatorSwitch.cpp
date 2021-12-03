#include<iostream>
using namespace std;

int main()
{
    int a,b;  // operands

    char ch; // for operation
    cout << "Enter the operands \n";
    cin >> a >> b;
    cout << "Enter the operation \n";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '*':
        cout << a*b << endl;
        break;
    case '/':
        cout << a/b << endl;
        break;
    case '%':
        cout << a%b << endl;
        break;
    
    default:
        cout << "This is wrong Operation \n";
        break;
    }
}