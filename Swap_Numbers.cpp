#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int a,b,temp;

    cout<<"Enter First Number : ";
    cin>>a;

    cout<<"Enter Second Number : ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"\nFirst Number : "<<a;
    cout<<"\nSecond Number : "<<b;
}
