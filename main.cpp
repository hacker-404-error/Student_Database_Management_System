#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;

int i=-1;

struct student
{
    string name,clas_s,roll;
    float tot,obt,per;
}s[100];

void control_panel()
{
    system("cls");
    system("color 0d");
        cout<<"\n\n\n\t\t\t\t**************************************************";
        cout<<"\n\t\t\t\t* WELCOME TO STUDENT DATA BASE MANAGEMENT SYSTEM *";
        cout<<"\n\t\t\t\t**************************************************";    
        cout<<"\n\n\n\t\t\t\t************CONTROL PANEL************\n\n\n\n";
        cout<<"\t\t\t\t1.Insert Record\n";
        cout<<"\t\t\t\t2.Display Record\n";
        cout<<"\t\t\t\t3.Search Record\n";
        cout<<"\t\t\t\t4.Update Record\n";
        cout<<"\t\t\t\t5.Delete Record\n";
        cout<<"\t\t\t\t6.EXIT\n";

}


void insert(student s[])
{
    string rollno;
    system("cls");
    system("color 0c");
    cout<<"\n\n\n\t\t\t\t************INSERT RECORD************";

    cout<<"\n\n\n\n\t\t\tEnter Roll No.:        ";
    getline(cin >>ws, rollno);

    
    
    if(i>=0)
    {
        
        for(int a=0;a<=i;a++)
        {
            if(rollno==s[a].roll)
            {
                cout<<"\n\n\n\t\t\t"<<"ROLL NUMBER "<<rollno<<" ALREADY EXISTS.....\n\n\n ";
                return;
            }
        }
    }

        i++;
        cout<<"\n\n\t\t\tEnter Name :           ";
        getline(cin, s[i].name);

        cout<<"\n\n\t\t\tEnter Class :          ";
        getline(cin, s[i].clas_s);

        cout<<"\n\n\t\t\tEnter Total Marks:     ";
        cin>>s[i].tot;

        cout<<"\n\n\t\t\tEnter Marks Obtained. :";
        cin>>s[i].obt;

        s[i].per = (s[i].obt / s[i].tot)*100;

        s[i].roll=rollno;
       
    
}



void display(student s[])
{
    system("cls");
    system("color 0d");
    cout<<"\n\n\n\t\t\t\t************DISPLAY RECORD************\n\n";
    if(i<0)
    {
        cout<<"\n\n\n\t\t\t\t      NO RECORD TO DISPLAY.....!\n\n\n";
    }
    else
    {
    for(int a=0;a<=i;a++)
    {
        cout<<"\n\n\t\t\tSTUDENT:"<<"    STUDENT NAME:"<<"    ROLL NO.:"<<"    CLASS:\n";
        cout<<"\t\t\t"<<a+1<<"              "<<s[a].name<<"              "<<s[a].roll<<"          "<<s[a].clas_s<<"\n\n";
        
        cout<<"\n\t\t\t\tMARKS OBTAINED       "<<s[a].obt;
        cout<<"\n\t\t\t\t---------------- =  -----";
        cout<<"\n\t\t\t\tTOTAL MARKS          "<<s[a].tot;
        
        cout<<"\n\n\n\t\t\tTotal Percentage: "<<s[a].per<<"\n";
        cout<<"\t\t\t------------------------------------------------------\n\n";
        // cout<<"\n\n\n\nSTUDENT: "<<a+1;
        // cout<<"\t\t\nStudent Name: "<<s[a].name;
        // cout<<"\t\t\nRoll no.: "<<s[a].roll;
        // cout<<"\t\t\nClass: "<<s[a].clas_s;
        // cout<<"\t\t\nMarks Obtained / Total Marks: "<<s[a].obt<<"/"<<s[a].tot;
        // cout<<"\t\t\nTotal Percentage: "<<s[a].per;
    }
    }
}

void search(student s[])
{
    system("cls");
    system("color 0e");
    string rollno;
    int a,count=0;
    cout<<"\n\n\n\t\t\t\t************SEARCH  RECORD************";
 
    if(i>=0)
    {
        cout<<"\n\n\n\nEnter Roll No.";
        getline(cin >>ws,rollno);
        for(a=0;a<=i;a++)
        {
            if(rollno == s[a].roll)
            {
                cout<<"\n\n\t\t\tSTUDENT:"<<"    STUDENT NAME:"<<"    ROLL NO.:"<<"    CLASS:\n";
                cout<<"\t\t\t"<<a+1<<"              "<<s[a].name<<"              "<<s[a].roll<<"          "<<s[a].clas_s<<"\n\n";
        
                cout<<"\n\t\t\t\tMARKS OBTAINED       "<<s[a].obt;
                cout<<"\n\t\t\t\t---------------- =  -----";
                cout<<"\n\t\t\t\tTOTAL MARKS          "<<s[a].tot;
        
                cout<<"\n\n\n\t\t\tTotal Percentage: "<<s[a].per<<"\n";
                cout<<"\t\t\t------------------------------------------------------\n\n";
                // cout<<"\t\t\nStudent Name: "<<s[a].name;
                // cout<<"\t\t\nRoll no.: "<<s[a].roll;
                // cout<<"\t\t\nClass: "<<s[a].clas_s;
                // cout<<"\t\t\nMarks Obtained / Total Marks: "<<s[a].obt<<"/"<<s[a].tot;
                // cout<<"\t\t\nTotal Percentage: "<<s[a].per;
                count++;
                
            }
        }

         if(count==0)
        {
            cout<<"\n\n\n\t\t\t\t     *NO RECORD FOUND FOR..."<<rollno<<"...!!"<<endl;
        }
    }
    else
    {
        cout<<"\n\n\n\t\t\t\t            DATABASE IS EMPTY.....!!!"<<endl;

    }
}

void update_student_name(student s[],int a)
{
    string name;
    cout<<"\n\t\t\t\t\t\tENTER NAME:     ";
    getline(cin >>ws,name);
    s[a].name=name;

}
void update_rollno(student s[],int a)
{
    string rollno;
    cout<<"\n\t\t\t\t\tENTER ROLL NO. :";
    getline(cin >>ws,rollno);
    if(s[a].roll==rollno)
    {
        cout<<"\t\t\t\tUpdated....!!";
        return;
    }
    else
    {

        for(int a=0;a<=i;a++)
        {
            if(rollno==s[a].roll)
            {
                cout<<"\n\n\n\n"<<"ROLL NUMBER "<<rollno<<" ALREADY EXISTS.....\n\n\n ";
                return;
            }
        }  
    }
    s[a].roll=rollno;
    cout<<"\t\t\t\tUpdated....!!";
}

void update_marks_obtained(student s[],int a)
{
    int marks;
    cout<<"\n\t\t\t\t\tENTER MARKS: ";
    cin>>marks;
    s[a].obt=marks;
    s[a].per = (s[a].obt / s[a].tot ) *100;
}

void update_class(student s[], int a)
{
    string clas;
    cout<<"\n\t\t\t\t\tENTER CLASS: ";
    getline(cin >>ws, clas);
    s[a].clas_s=clas;


}

void upadte_total_marks(student s[],int a)
{
    int totalmarks;
    cout<<"\n\t\t\t\t\tENTER MARKS: ";
    cin>>totalmarks;
    s[a].tot=totalmarks;
    s[a].per = (s[a].obt / s[a].tot ) *100;

}

void update_menu(student s[],int a)
{   
    int choice;
    cout<<"\t\t\t\t1-Update Student Name.\n";
    cout<<"\t\t\t\t2-Update Roll no.\n";
    cout<<"\t\t\t\t3-Update Class.\n";
    cout<<"\t\t\t\t4-Update Marks Obtained.\n";
    cout<<"\t\t\t\t5-Update Total Marks.\n";
    cout<<"\t\t\t\t6-EXIT.\n\n\n";
    cout<<"\t\t\t\t\tEnter Your Choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            update_student_name(s,a);
            cout<<"\t\t\t\tUpdated....!!\n\n";
            break;
        case 2:
            update_rollno(s,a);
            break;
        case 3:
            update_class(s,a);
            cout<<"\t\t\t\tUpdated....!!\n";
            break;
        case 4:
            update_marks_obtained(s,a);
            cout<<"\t\t\t\tUpdated....!!\n";
            break;
        case 5:
            upadte_total_marks(s,a);
            cout<<"\t\t\t\tUpdated....!!\n";
            break;
        case 6:
            break;
        default:
            cout<<"\n\n\n\t\t\tINVALID VALUE OF CHOICE..."<<endl;
            return;        
    }
}

void update(student s[])
{
    system("cls");
    system("color 0e");
    string rollno;
    int count=0;
    // cout<<"\n\n\n\t\t\t\tUPDATE SCREEN";
    cout<<"\n\n\n\t\t\t\t************UPDATE SCREEN************\n\n\n";

    
    if(i>=0)
    {
        cout<<"\t\t\nENTER ROLL NUMBER ";
        getline(cin >>ws,rollno);
        for(int a=0;a<=i;a++)
        {
            if(rollno==s[a].roll)
            {
                count++;
                update_menu(s,a);
                break;
            }               
        }
        if(count==0)
        {
            cout<<"\n\n\n\t\t\t"<<rollno<<" not found...!!";
        }
    }
    else
    {
        cout<<"\n\n\n\t\t\t\t\tDATABASE IS EMPTY.....!!!\n\n\n";
    }
}
    

void del(student s[])
{
    system("cls");
    system("color 06");
    string roll;
    string t_roll,t_class,t_name;
    float t_tot,t_obt,t_per;
    int count=0;
    cout<<"\n\n\n\t\t\t\t************DELETE RECORD************";
    if(i>=0)
    {
        cout<<"\n\n Roll no. for delete :";
        cin>>roll;
        for(int a=0;a<=i;a++)
        {
            if(roll==s[a].roll)
            {
                for(int j=a;j<i;j++)
                {
                    t_roll = s[j+1].roll;
                    t_name = s[j+1].name;
                    t_class = s[j+1].clas_s;
                    t_tot = s[j+1].tot;
                    t_obt = s[j+1].obt;
                    t_per = s[j+1].per;

                    s[j].roll = t_roll;
                    s[j].name = t_name;
                    s[j].clas_s = t_class;
                    s[j].tot = t_tot;
                    s[j].obt = t_obt;
                    s[j].per = t_per;
                }
                cout<<"\n\n\n\t\t\t RECORD IS DELETED...";
                i--;
                count++;
            }

        }
        if(count == 0)
        {
            cout<<"\n\n\n\t\t\t Record Not Found...";
        }

    }
    else
    {
        cout<<"\n\n\n\n\t\t\t\t\tDATABASE IS EMPTY.....!!!\n\n\n";
    }
}



main()
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
        system("cls");
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
        p:
        system("cls");
        system("color 0b");
            
        control_panel();
        int choice;
        char x;
        cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                do
                {
                    insert(s);
                    cout<<"\n\n\n\n\t\t\t      Do You Want To Enter Anouther Record (y,n) : ";
                    cin>>x;
                } while(x == 'y' || x== 'Y');
                break;
            case 2:
                display(s);
                break;
            case 3:
                search(s);
                break;
            case 4:
                update(s);
                break;
            case 5:
                del(s);
                break;
            case 6:
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t\t\t\tEXITING.";
                for(int x=0;x<6;x++)
                {
                    Sleep(500);
                    cout<<".";
                }
                // cout<<"Exiting...";
                ::exit(0);
            default:
                cout<<"\n\n\n\t\t\tINVALID VALUE OF CHOICE.....TRY AGAIN"<<endl;        
        }
        cout<<"\n\n\t\t\t                PRESS ANY KEY TO CONTINUE...";
        getch();
        goto p;
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\t\t\t\t\t\t********************************";
        cout<<"\n\t\t\t\t\t\t* W R O N G   P A S S W O R D  *";
        cout<<"\n\t\t\t\t\t\t********************************";
        char c;
        cout<<"\n\n\n\t\t\t\t\tEnter Again? (y/n)";
        cin>>c;
        if(c=='y' || c=='Y')
        {
        goto q;
        }
        else
        {
            system("cls");
            cout<<"\n\n\n\n\n\t\t\t\t\t\tEXITING.";
            for(int x=0;x<6;x++)
            {
                Sleep(500);
                cout<<".";
            }
            exit(0);
        }
    }
}