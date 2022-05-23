    //welcome yasir:
#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>
using namespace std;

struct detail
{
    char name[50];
    char stuname[50];
    int ID;
    int  dd, mm ,yr;
    char passwrd[10];
};
class library
{    
    
    public: 
    detail d;
    void main();
    void Student(); 
    void techer();
    
};

void library::main()
{  
  cout<<"==============================="<<endl;
  cout<<"   Library MAnagement System"<<endl;
  cout<<"===============================\n"<<endl;
  cout<<"\t1.Student"<<endl;
  cout<<"\t2.Teacher"<<endl;
  cout<<"\t3.Exit"<<endl;

}
void library::Student()           //Student login
{   menustart:
    int choice; 
    system("cls");
    cout<<"----Welcome Student Section---\n";
    cout<<"==============================\n"<<endl;
    cout<<"\t1.Borrow a Book"<<endl;
    cout<<"\t2.Return a Book"<<endl;
    cout<<"\t3.Lists of all books"<<endl;
    cout<<"\t4.Exit"<<endl;
    trystu:
    cout<<"Enter password: "<<endl;
    cin>>d.passwrd;
    
    if(strcmp(d.passwrd,"yasir")==0||strcmp(d.passwrd,"Yasir")==0)
    { 
    cout<<"Enter your choice: ";
     cin>>choice;
    
    switch (choice)
    {
    case 1:{   
             char ch;
            system("cls");              //Borrow book
        do{  
             int date,month,year;
            cout<<"---Borrow a Book--\n";
            cout<<"Date:dd mm yy ";     cin>>d.dd>>d.mm>>d.yr;
            cout<<"Enter Student Name: ";   cin>>d.stuname;
            cout<<"Enter Student ID: ";    cin>>d.ID;
            cout<<"Book name or scan Barcode:";  cin>>d.name;
            cout<<"Issue Date:";    cin>>date>>month>>year;
            
            system("cls");
             cout<<"====================="<<endl;
            cout<<"Student Name:"<<d.stuname<<endl;
            cout<<"Student ID:"<<d.ID<<endl;
            cout<<"Book name for issue:"<<d.name<<endl;
            cout<<"issue date of book: "<<d.dd<<"/"<<d.mm<<"/"<<d.yr<<endl;
            cout<<"Sucessfull Thank You\n"<<endl;
            cout<<"Continue or exit (y/n):";
            cin>>ch;
            
        }while(ch=='y');
               break;
           }
    case 2:{  char ch;     
             system("cls");             //return book
        do{  
             cout<<"----Return a Book----\n";
           cout<<"Date:dd mm yy "; cin>>d.dd>>d.mm>>d.yr;
            cout<<"Enter Student Name: ";cin>>d.stuname;
            cout<<"Enter Student ID: ";cin>>d.ID;
            cout<<"Book name:";cin>>d.name;
            cout<<"Student Name:"<<d.stuname<<endl;
            system("cls");
            cout<<"Student Name:"<<d.name<<endl;
            cout<<"Student ID:"<<d.ID<<endl;
            cout<<"book Name:"<<d.name<<endl;
            cout<<"Book is retured Successfully\nTHANK YOU"<<endl;
            cout<<"Continue or Exit (y/n):";
            cin>>ch;
          }while(ch=='y');    break;
       }
          
    default:{
        cout<<"Wrong choice";
        }
        }
    }
    else{
        
        cout<<"Invalid Password...Please try again"<<endl;
        goto trystu;     
    }
    }


void library::techer()                //Techer section
{     
    int choice;   
        system("cls");
    cout<<"-----------Welcome Here---------\n";
    cout<<"================================"<<endl;
    cout<<"----------Techer Section--------\n"<<endl;
    cout<<"\t1.Add new book"<<endl;
    cout<<"\t2.Update any Book"<<endl;
    cout<<"\t3.Delete Book"<<endl;
    cout<<"\t4.List of All Books"<<endl;
    cout<<"\t5.Exit"<<endl;
    tryagain:
    cout<<"Enter password: ";
    cin>>d.passwrd;
    if(strcmp(d.passwrd,"yasir")==0)
    {
    cout<<"Enter your choice";
    cin>>choice;
    system("cls");
     switch (choice)
     {  
     case 1:{ cout<<"Date:dd mm yy "; //add book here
              cin>>d.dd>>d.mm>>d.yr;
              cout<<"Enter Student ID: ";
              cin>>d.ID;
             cout<<"Student ID:"<<d.ID<<endl;
             char ch;
         do{
              cout<<"----Add New Book----\n"<<endl;
              
              cout<<"Enter Book Name"<<endl;
              cin>>d.name;
              system("cls");
              cout<<"Date:"<<d.dd<<"/"<<d.mm<<"/"<<d.yr<<endl;
              cout<<d.name<<"Book is added"<<endl;
              cout<<"\twant to add book again (y/n): ";
              cin>>ch;
              }while(ch=='y');
                   break;

              } 
           
    case 2:{  
            cout<<"Date:dd mm yy:";
            cin>>d.dd>>d.mm>>d.yr;
         char ch;
         do{
         cout<<"------Update Any book----"<<endl;
         cout<<"Enter Privious edition name of book: "<<endl;
         cin>>d.name;
         cout<<"Enter new edition name of book: "<<endl;
         cin>>d.name;
         cout<<"Book is updated Successfully "<<endl;
         cout<<"Thank your "<<endl;
         cout<<"continue or exit(y/n):";
         cin>>ch;
         }while(ch=='n');
    
             break;
         }  
      case 3:{
                cout<<"---Delete book Section---\n"<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"Enter Name of Book for Delete: "<<endl;cin>>d.name;
                cout<<"Enter Publication: "<<endl; cin>>d.name;
                cout<<d.name<<" Book is deleted Successfully ";
                break;
            }
      case 5:{
             
            system("cls");
            cout<<"Exit";break;   
        }
     default:{
         cout<<"Wrong choice:";break;
           }
               }
          }
    else{
        
        cout<<"Invalid Password try Again "<<endl;
        goto tryagain;
      
    }
    
}


int main()
{   int choice;
    system("cls");
    library l;
    l.main();
     again:
    cout<<"Enter your choice:";
    cin>>choice;
    if(choice==1)
    {
        l.Student();
    }
    if(choice==2)
    {
        l.techer(); 
    }
    if(choice==3){
       
        system("cls"); cout<<"Exit";
    }
    else{
        
        goto again;
      
    }
   
    


return 0;
}