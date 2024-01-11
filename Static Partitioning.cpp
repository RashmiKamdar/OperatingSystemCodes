#include<iostream>
using namespace std;

int main()
{
    int pno,mno,choice,temp=0,i,lowest=9999;
    int a1[20],a2[20];
    int p[10],m[10],ffres[10],bfres[10],part;
    cout<<"Enter Number of Memory Blocks : ";
    cin>>mno;
    cout<<"Enter Number of Processes : ";
    cin>>pno;

    for(int i=0;i<mno;i++)
    {
        cout<<"Memory Block "<<(i+1)<<" Size : ";
        cin>>m[i];
    }

    for(int i=0;i<pno;i++)
    {
        cout<<"Process "<<(i+1)<<" Size : ";
        cin>>p[i];
    }
    cout<<"(1).First Fit"<<endl;
    cout<<"(2).Best Fit"<<endl;
    cout<<"Enter Choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            for(int i=0;i<mno;i++)
            {
                if(m[i]>=p[i])
                {
                    ffres[i]=m[i]-p[i];
                    cout<<"Process "<<(i+1)<<" allocated to Memory Block "<<(i+1)<<endl;
                    cout<<"Internal Fragmentation of Process "<<(i+1)<<" is "<<ffres[i]<<endl;
                }
                else
                {
                    cout<<"Process "<<(i+1)<<" is not allocated to Memory Block "<<(i+1)<<endl;
                }
            }
            break;


        case 2:
            for(int t=0;t<pno;t++)
            {
                for(int q=0;q<mno;q++)
                {
                    if(a1[q]!=1)
                    {
                        temp=m[q]-p[t];
                        if(temp>=0)
                            if(lowest>temp)
                            {
                                a2[t]=q;
                                lowest=temp;
                            }
                    }
                }
                a1[a2[t]]=1;
                lowest=10000;
            }
              cout<<endl<<"Process number\tProcess size\tBlock number\tBlock size";
                for(int i=0;(i<pno);i++)
                {
                    cout<<endl<<i+1<<"\t\t"<<p[i]<<"\t\t"<<a2[i]+1<<"\t\t"<<m[a2[i]];
                }
            break;
    }
}
