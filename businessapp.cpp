#include<iostream>
#include<windows.h>
using namespace std;
void choices();
void printmenu();
void enterchoice();
void status();
void e1portfolio();
void interface1();
void e2portfolio();
void gotoxy(int x,int y);
string gmail,lgmail,lpassword,password;
string stat,job,offer;
string name,city,edu,edu1,edu2,school,clg,uni,grade1,grade2,location,prevcompany,prevcompany1,compexp;
int age,experience,salary;
string ejob,jt,jt1,jtype,comp,jpost,currency;
float gpa;
int x,y;
main()
{
  while(true)
  {
  enterchoice();
  Sleep(1500);
  system("cls");
  }
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


void printmenu()
{
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                ************************************************************************************************************************* "<<endl;
cout<<"                **  ######   #####   ######  ####### ####### ######      ######  #####  ###     ## ###     ## #######  ###### ######## ** "<<endl;                                                                                             
cout<<"                ** ##       ##   ##  ##   ## ##      ##      ##   ##    ##      ##   ## ####    ## ####    ## ##      ##         ##    ** "<<endl;
cout<<"                ** ##       ##   ##  ##   ## ##      ##      ##   ##    ##      ##   ## ## ##   ## ## ##   ## ##      ##         ##    ** "<<endl;
cout<<"                ** ##       #######  ######  #####   #####   ######     ##      ##   ## ##  ##  ## ##  ##  ## #####   ##         ##    ** "<<endl;
cout<<"                ** ##       ##   ##  ## ##   ##      ##      ## ##      ##      ##   ## ##   ## ## ##   ## ## ##      ##         ##    ** "<<endl;
cout<<"                ** ##       ##   ##  ##  ##  ##      ##      ##  ##     ##      ##   ## ##    #### ##    #### ##      ##         ##    ** "<<endl;
cout<<"                **  ######  ##   ##  ##   ## ####### ####### ##   ##     ######  #####  ##     ### ##     ### #######  ######    ##    ** "<<endl;
cout<<"                ************************************************************************************************************************* "<<endl;

}

void choices()
{
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                       1.SIGN UP                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                        2.LOGIN                                                           "<<endl;
cout<<"                                                                                                                                          "<<endl; 
}



void enterchoice()
{
  system("cls");
  printmenu();
  choices();
  int choice;
  x=67,y=18;
  gotoxy(x,y);
  cout<<"Enter your choice: ";
  cin>>choice;
   if(choice==1)
  {
   x=58,y=16;
   system("cls");
   printmenu();
   gotoxy(x,y);
   cout<<"Enter your Gmail Account: ";
   cin>>gmail;
   gotoxy(x+5,y+3);
   cout<<"Choose Password: ";
   cin>>password;
   gotoxy(x+8,y+6);
   cout<<"Account Created!";
  }
   if(choice==2)
  {
   system("cls");
   printmenu();
   x=58,y=16;
   gotoxy(x,y);
   cout<<"Enter your gmail to login: ";
   cin>>lgmail;
   gotoxy(x+3,y+2);
   cout<<"Enter your password: ";
   cin>>lpassword;
   if(lgmail==gmail && lpassword==password)
   {
    gotoxy(x+3,y+4);
    cout<<"Login Successfully...";
    status();
   }
   else
   {
    gotoxy(x+1,y+4);
    cout<<"You have not sign up your account!";  
   }
   }

}      

void status()
{
   system("cls");
   printmenu();
   x=58,y=13;
   gotoxy(x,y);
   cout<<"Are you an Employee OR Employer??: ";
   cin>>stat;
   if(stat=="Employee")
   {
    e1portfolio();
    interface1();
   }
   if(stat=="Employer")
   {
    e2portfolio();
   }
}

void e1portfolio()
{
    cout<<"NAME: ";
    cin>>name;
    cout<<"CITY: ";
    cin>>city;
    cout<<"AGE: ";
    cin>>age;
    cout<<"EDUCATION\n";
    cout<<"Title: ";
    cin>>edu;
    cout<<"School: ";
    cin>>school;
    cout<<"Grade: ";
    cin>>grade1;
    cout<<"\nTitle: ";
    cin>>edu1;
    cout<<"College: ";
    cin>>clg;
    cout<<"Grade: ";
    cin>>grade2;
    cout<<"\nTitle: ";
    cin>>edu2;
    cout<<"University: ";
    cin>>uni;
    cout<<"CGPA: ";
    cin>>gpa;
    cout<<"\nWORK EXPERIENCE\n";
    cout<<"Company: ";
    cin>>prevcompany>>prevcompany1;
    cout<<"Experience: ";
    cin>>experience;
}   



void e2portfolio()
{
    cout<<"NAME: ";
    cin>>name;
    cout<<"CITY: ";
    cin>>city;
    cout<<"COMPANY\n";
    cout<<"Title: ";
    cin>>comp;
    cout<<"Location: ";
    cin>>location;
    cout<<"Company Experience: ";
    cin>>compexp;
    cout<<"Job Post: ";
    cin>>jpost;
    cout<<"Job Type: ";
    cin>>jtype;
    cout<<"Salary to offer(per hour): ";
    cin>>salary;
    cout<<"Currency: ";
    cin>>currency;
}   

void interface1()
{
    system("cls");
    printmenu();
    cout<<"Requirements:\n";
    cout<<"Job title: ";
    cin>>jt>>jt1;
    cout<<"Type: ";
    cin>>ejob;
    cout<<"Location: ";
    cin>>location;
}
    
    