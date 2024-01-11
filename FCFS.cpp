#include<iostream>
using namespace std;

class FCFS
{
    public:
    string process_name;
    int et,at,wt;
    void setter()
    {
        cout<<"Enter Process Name : ";
        cin>>process_name;
        cout<<"Enter Arrival Time : ";
        cin>>at;
        cout<<"Enter Execution Time : ";
        cin>>et;
    }
};
int main()
{
    FCFS a,b,c,d;
    a.setter();
    b.setter();
    c.setter();
    d.setter();
    cout<<"\n"<<"Process Name"<<"\tService Time"<<"\tArrival Time"<<"\tExecution Time"<<"\tWaiting Time";
    cout<<"\n"<<a.process_name<<"\t\t"<<"0"<<"\t\t"<<a.at<<"\t\t"<<a.et<<"\t\t"<<"0";
    cout<<"\n"<<b.process_name<<"\t\t"<<(a.et+0)<<"\t\t"<<b.at<<"\t\t"<<b.et<<"\t\t"<<((a.et+0)-b.at);
    cout<<"\n"<<c.process_name<<"\t\t"<<(a.et+b.et+0)<<"\t\t"<<c.at<<"\t\t"<<c.et<<"\t\t"<<((a.et+b.et+0)-c.at);
    cout<<"\n"<<d.process_name<<"\t\t"<<(a.et+b.et+c.et+0)<<"\t\t"<<d.at<<"\t\t"<<d.et<<"\t\t"<<((a.et+b.et+c.et+0)-d.at);
}
