#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ifstream infile;
    infile.open("File_Read.txt",ios::app);
    cout<<"Text in File <File_Read.txt> is : ";

    while(infile)
    {
        getline(infile,str);
    }
    cout<<str;
    infile.close();
}
