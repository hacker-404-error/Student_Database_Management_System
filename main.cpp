#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int i=-1;

struct student
{
    string name,clas_s,roll;
    float tot,obt,per;
}s[100];

void control_panel()
{
    cout<<"\n\n\n\t\t\t\t CONTROL PANEL\n\n";
    cout<<"1.Insert Record\n";
    cout<<"2.Display Record\n";
    cout<<"3.Search Record\n";
    cout<<"4.Update Record\n";
    cout<<"5.Delete Record\n";
    cout<<"6.EXIT\n";

}


void insert(student s[])
{
    string rollno;
    system("cls");
    cout<<"\n\n\n\t\t\t\tINSERT RECORD";

    cout<<"\nEnter Roll No. :";
    getline(cin >>ws, rollno);

    
    
    if(i>=0)
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

        i++;
        cout<<"\n\nEnter Name :";
        getline(cin, s[i].name);

        cout<<"\nEnter Class :";
        getline(cin, s[i].clas_s);

        cout<<"\nEnter Total Marks :";
        cin>>s[i].tot;

        cout<<"\nEnter Marks Obtained. :";
        cin>>s[i].obt;

        s[i].per = (s[i].obt / s[i].tot)*100;

        s[i].roll=rollno;
       
    
}



void display(student s[])
{
    system("cls");
    cout<<"\n\n\n\t\t\t\tDIsplay Record";
    if(i<0)
    {
        cout<<"\n\n\n\n\nNO RECORD TO DISPLAY";
    }
    else
    {
    for(int a=0;a<=i;a++)
    {
        cout<<"\n\n\n\nSTUDENT: "<<a+1;
        cout<<"\t\t\nStudent Name: "<<s[a].name;
        cout<<"\t\t\nRoll no.: "<<s[a].roll;
        cout<<"\t\t\nClass: "<<s[a].clas_s;
        cout<<"\t\t\nMarks Obtained / Total Marks: "<<s[a].obt<<"/"<<s[a].tot;
        cout<<"\t\t\nTotal Percentage: "<<s[a].per;

    }
    }
}

void search(student s[])
{
    system("cls");
    string rollno;
    int a,count=0;
    cout<<"\n\n\t\t\tSEARCH RECORD";
 
    if(i>=0)
    {
        cout<<"\n\n\n\nEnter Roll No.";
        getline(cin >>ws,rollno);
        for(a=0;a<=i;a++)
        {
            if(rollno == s[a].roll)
            {
                cout<<"\t\t\nStudent Name: "<<s[a].name;
                cout<<"\t\t\nRoll no.: "<<s[a].roll;
                cout<<"\t\t\nClass: "<<s[a].clas_s;
                cout<<"\t\t\nMarks Obtained / Total Marks: "<<s[a].obt<<"/"<<s[a].tot;
                cout<<"\t\t\nTotal Percentage: "<<s[a].per;
                count++;
                
            }
        }

         if(count==0)
        {
            cout<<"NO RECORD FOUND FOR "<<rollno<<endl;
        }
    }
    else
    {
        cout<<"\n\n\n\nDATABASE IS EMPTY...!!"<<endl;

    }
}

void update_student_name(student s[],int a)
{
    string name;
    cout<<"\t\t\t\t\tENTER NAME: ";
    getline(cin >>ws,name);
    s[a].name=name;

}
void update_rollno(student s[],int a)
{
    string rollno;
    cout<<"\t\t\t\tENTER ROL NO. :";
    getline(cin >>ws,rollno);
    if(s[a].roll==rollno)
    {
        cout<<"Updated....!!";
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
    cout<<"Updated....!!";
}

void update_marks_obtained(student s[],int a)
{
    int marks;
    cout<<"\t\t\t\tenter marks: ";
    cin>>marks;
    s[a].obt=marks;
    s[a].per = (s[a].obt / s[a].tot ) *100;
}

void update_class(student s[], int a)
{
    string clas;
    cout<<"\t\t\t\tenter class: ";
    getline(cin >>ws, clas);
    s[a].clas_s=clas;


}

void upadte_total_marks(student s[],int a)
{
    int totalmarks;
    cout<<"\t\t\t\tenter marks: ";
    cin>>totalmarks;
    s[a].tot=totalmarks;
    s[a].per = (s[a].obt / s[a].tot ) *100;

}

void update_menu(student s[],int a)
{   
    int choice;
    cout<<"\t\t\n1-Update Student Name: ";
    cout<<"\t\t\n2-Update Roll no.: ";
    cout<<"\t\t\n3-Update Class: ";
    cout<<"\t\t\n4-Update Marks Obtained";
    cout<<"\t\t\n5-Update Total Marks";
    cout<<"\t\t\n6-EXIT";
    cout<<"\n\n\nEnter Your Choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
            update_student_name(s,a);
            cout<<"Updated....!!";
            break;
        case 2:
            update_rollno(s,a);
            break;
        case 3:
            update_class(s,a);
            cout<<"Updated....!!";
            break;
        case 4:
            update_marks_obtained(s,a);
            cout<<"Updated....!!";
            break;
        case 5:
            upadte_total_marks(s,a);
            cout<<"Updated....!!";
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
    string rollno;
    int count=0;
    cout<<"\n\n\n\t\t\t\tUPDATE SCREEN";

    
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
        cout<<"\n\n\n\nDATABASE IS EMPTY.....!!!";
    }
}
    

void del(student s[])
{
    system("cls");
    string roll;
    string t_roll,t_class,t_name;
    float t_tot,t_obt,t_per;
    int count=0;
    cout<<"\n\n\t\t\t\t DELETE RECORD";
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
                cout<<"\n\n RECORD IS DELETED...";
                i--;
                count++;
            }

        }
        if(count == 0)
        {
            cout<<"\n\n Record Not Found...";
        }

    }
    else
    {
        cout<<"\n\n\n DataBase is Empty....";
    }
}



main()
{
    string email,pass;
    char c;
    q:
    system("cls");
    cout<<"\n\n\n\t\t\t\tLOGIN PAGE";
    cout<<"\n\nEMAIL: ";
    cin>>email;
    cout<<"\n\nPASSWORD: ";
    while((c=getch())!='\r')
    {
        pass+=c;
        cout<<"*";
    }
    cout<<pass;
    if(email=="pritam@gmail.com" && pass=="pritam")
    {
        p:
        system("cls");
        cout<<"\n\n\n\n\n\t\tWELCOME TO STUDENT DATA BASE MANAGEMENT SYSTEM ";
        control_panel();
        int choice;
        char x;
        cout<<"\n\nEnter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                do
                {
                    insert(s);
                    cout<<"\nDo You Want To Enter Anouther Record (y,n) : ";
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
                cout<<"Exiting...";
                ::exit(0);
            default:
                cout<<"\n\n\n\t\t\tINVALID VALUE OF CHOICE.....TRY AGAIN"<<endl;        
        }
        cout<<"\n\t\t\tPRESS ANY KEY TO CONTINUE...";
        getch();
        goto p;
    }
    else
    {
        system("cls");
        cout<<"\nWRONG PASSWORD";
        char c;
        cout<<"\n\nenter again ? (y/n)";
        cin>>c;
        if(c=='y' || c=='Y')
        {
        goto q;
        }
        else
        {
            cout<<"exiting";
            exit(0);
        }
    }
}