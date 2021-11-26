#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
int main()
{
    q:
    string email,pass;
    char c;
    system("cls");
    system("color 0a");
    cout<<"\n\n\n\t\t\t\t\t\t\tLOGIN PAGE";
    cout<<"\n\n\n\n\t\t\tUSERNAME: ";
    cin>>email;
    cout<<"\n\n\n\n\t\t\tPASSWORD: ";
    while((c=getch())!='\r')
    {
        pass+=c;
        cout<<"*";
    }
    // cout<<pass;
    if(email=="pritam22" && pass=="pritam")
    {
        cout<<"\t\t\tWELCOME";
        cout<<"\n\n\n\n\t\t\t\tPRESS ANY KEY TO CONTINUE...."<<endl;
        getch();
    }
    else if(email != "pritam22" && pass =="pritam")
    {
        cout<<"\n\nInvalid Email Id"<<endl;
    }
    
    else if(email == "pritam22" && pass !="pritam")
    {
        cout<<"\n\nInvalid PASSWORD"<<endl;
    }
    else
    {
        cout<<"\n\n Wrong Login Credentials";
    }
    getch();
    return 0;
}