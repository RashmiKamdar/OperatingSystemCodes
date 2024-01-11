#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char num[20];
    cout<<"Enter A Number : ";
    cin>>num;

    if(num==strrev(num))
    {
        cout<<"String is Palindrome";
    }
    else
    {
        cout<<"String is not a Palindrome";
    }
}
