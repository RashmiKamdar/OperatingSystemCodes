#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ofstream outfile;
    outfile.open("File_Read.txt",ios::app);

    cout<<"Enter Text to write in file : ";
    getline(cin,str);

    outfile<<str;

    outfile.close();

}

