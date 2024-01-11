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
    int n;
    int sum=0;
    cout<<"How Many Processes : ";
    cin>>n;
    FCFS a[n];

    for(int i=0;i<n;i++)
    {
        a[i].setter();
    }
    cout<<"\n"<<"Process Name"<<"\tService Time"<<"\tArrival Time"<<"\tExecution Time"<<"\tWaiting Time";

    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i].process_name<<"\t\t"<<sum<<"\t\t"<<a[i].at<<"\t\t"<<a[i].et<<"\t\t"<<(sum-a[i].at);
        sum=sum+a[i].et;
    }
}
