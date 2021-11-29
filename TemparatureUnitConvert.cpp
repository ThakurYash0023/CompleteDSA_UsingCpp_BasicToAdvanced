// In this program, we will convert the celcius temparature to farenheit
// (°F − 32) × 5/9 = °C


#include<iostream>
using namespace std;

int main()
{
    int tempf;
    int celcius;
    cout<<"Enter the temparature in Farenhiet \n";
    cin>>tempf;

    celcius=(tempf-32)*5/9;

    cout<<"The Temparature in Celcius is : "<<celcius <<endl;
}