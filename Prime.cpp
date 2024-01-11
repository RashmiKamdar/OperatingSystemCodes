#include<iostream>
using namespace std;

int main()
{
    int num,i,count=0;
    cout<<"Enter A Number : ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count<=2)
    {
        cout<<"Number is Prime";
    }
    else
    {
        cout<<"Number is Non Prime";
    }

}
