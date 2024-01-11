#include<iostream>
using namespace std;

int main()
{
    int fact=1,i,num;
    cout<<"Enter A Number : ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is : "<<fact;
}
