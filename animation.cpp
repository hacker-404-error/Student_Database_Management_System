#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
main()
{
    system("cls");
    int m=1;
    cout<<"\n\n\n";
    for(int i=1;i<=5;i++)
    {
        cout<<"\t\t";
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=m;j<=80;j++)
        {
            Sleep(1);
            cout<<"*";
        }
        m=m+2;
        cout<<"\n";
    }
        cout<<"\n\t\t\t      ";
        for(int l=0;l<51;l++)
        {
            Sleep(5);
            cout<<"*";
        }
        cout<<"\n\t\t\t      * WELCOME TO STUDENT DATA BASE MANAGEMENT SYSTEM *";
        cout<<"\n\t\t\t      ";
        for(int l=0;l<51;l++)
        {
            Sleep(5);
            cout<<"*";
        }
        cout<<"\n\n";
        
    m=m-2;
    for(int i=1;i<=5;i++)
    {
        cout<<"\t\t";
        for(int k=5;k>i;k--)
        {
            cout<<" ";
        }
        for(int j=m;j<=80;j++)
        {
            Sleep(1);
            cout<<"*";
        }
        m=m-2;
        cout<<"\n";
    }
    cout<<"\n\n\n\n\t\t\t\tPRESS ANY KEY TO CONTINUE...."<<endl;

    getch();
    return 0;
}