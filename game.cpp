#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printoptions();
int  choices();
void printheader();
void character();
void emptycharacter();
void moveplayerleft();
void moveplayerup();
void moveplayerdown();
void moveplayerright();
void boundary();
void printgoal();
void emptygoal();
void movegoalup();
void movegoaldown();
void ball();
void emptyball();
void moveballleft();
void shootball();
void movement();
void printkeeper();
void emptykeeper();
void movekeeperupd();
void movekeeperdownd();
void movekeeperleft();
void cone();
void emptycone();
void conemove();
void shootcone();
char getCharAtxy(short int x,short int y);
int x=2,y=32;
int bx=27,by=37;
int gx=132,gy=30;
int kx=82,ky=32;
main()
{ 
  int choice;
  choice=choices();
  if(choice==1)
  {
   Sleep(100);
   system("cls");
   boundary();
   character();
   printgoal();
   printkeeper();
   ball();
   while(true)
   {
   movement();
   shootball();
   if(gy!=3)
   {
   movekeeperupd();
   movegoalup();
   }
   else if(gy==3)
   {
   while(gy!=30)
   {
   movegoaldown();
   movekeeperdownd();
   }
   }
   }
  if(choice==4)
  {
   return 0;
  }
  }
}
  
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}



void printoptions()
{
  cout<<"                                                                   1. NEW GAME                                                            "<<endl;
  cout<<"                                                                                                                                          "<<endl;
  cout<<"                                                                   2. LOAD GAME                                                           "<<endl;
  cout<<"                                                                                                                                          "<<endl;
  cout<<"                                                                   3.  OPTIONS                                                            "<<endl;
  cout<<"                                                                                                                                          "<<endl;
  cout<<"                                                                    4.  EXIT                                                              "<<endl;
  cout<<"                                                                                                                                          "<<endl;
}                                            


void printheader()
{
cout<<"            _______________________________________________________________________________________________________________________________ "<<endl;
cout<<"            |                                                                                                                              |"<<endl;
cout<<"            |    ##      ##  ##########   ########  ##      ##        ##########  ############       ##########  ###          ##       ##  |"<<endl; 
cout<<"            |    ##     ##       ##      ##         ##     ##             ##           ##                ##      ## #         ##       ##  |"<<endl;
cout<<"            |    ##    ##        ##      ##         ##    ##              ##           ##                ##      ##  #        ##       ##  |"<<endl; 
cout<<"            |    ##   ##         ##      ##         ##   ##               ##           ##                ##      ##   #       ##       ##  |"<<endl;
cout<<"            |    ##  ##          ##      ##         ##  ##                ##           ##                ##      ##    #      ##       ##  |"<<endl;
cout<<"            |    #####           ##      ##         #####                 ##           ##                ##      ##     #     ##       ##  |"<<endl;
cout<<"            |    ##  ##          ##      ##         ##  ##                ##           ##                ##      ##      #    ##       ##  |"<<endl;
cout<<"            |    ##   ##         ##      ##         ##   ##               !#           ##                ##      ##       #   ##       ##  |"<<endl;
cout<<"            |    ##    ##        ##      ##         ##    ##              ##           ##                ##      ##        #  ##           |"<<endl;
cout<<"            |    ##     ##       ##      ##         ##     ##             ##           ##                ##      ##         # ##       @@  |"<<endl;
cout<<"            |    ##      ##  ##########   ########  ##      ##        ##########       ##            ##########  ##          ###       @@  |"<<endl;
cout<<"            |______________________________________________________________________________________________________________________________|"<<endl;
cout<<"                                                                                                                                            "<<endl; 
cout<<"                                                                                                                                            "<<endl;
cout<<"                                                                                                                                            "<<endl;
}

int choices()
{
  system("cls");
  printheader();
  printoptions();
  int ch;
  int x,y;
  x=65,y=25;
  gotoxy(x,y);
  cout<<"ENTER CHOICE: ";
  cin>>ch;
  return ch;
}  

void boundary()
{
 cout<<"########################################################################################################################################################"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"########################################################################################################################################################"<<endl;
}

void character()
{
gotoxy(x,y); 
cout<<"      .:--:.                                                                        "<<endl;
gotoxy(x,y+1);
cout<<"     :: . .::                                                                       "<<endl;
gotoxy(x,y+2);
cout<<"     ':  - :'                                                                       "<<endl;
gotoxy(x,y+3);
cout<<"      ''''''                                                                        "<<endl;
gotoxy(x,y+4);
cout<<"        ||                                                                          "<<endl;
gotoxy(x,y+5);
cout<<"       /||\\                                                                        "<<endl;
gotoxy(x,y+6);
cout<<"      / || \\                                                                       "<<endl;
gotoxy(x,y+7);
cout<<"        ||                                                                          "<<endl;
gotoxy(x,y+8);
cout<<"       /  \\                                                                        "<<endl;
gotoxy(x,y+9);
cout<<"      /    \\                                                                       "<<endl;
}

void emptycharacter()
{
gotoxy(x,y); 
cout<<"                                                                                    "<<endl;
gotoxy(x,y+1);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+2);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+3);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+4);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+5);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+6);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+7);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+8);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+9);
cout<<"                                                                                    "<<endl;
}

void moveplayerright()
{
 if(getCharAtxy(x+110,y)==' ')
 {
 Sleep(200);
 emptycharacter();
 x=x+1;
 character();
 }
}

void moveplayerleft()
{
 if(getCharAtxy(x-1,y)==' ')
 { 
 Sleep(200);
 emptycharacter();
 x=x-1;
 character();
 }
}

void moveplayerup()
{
 if(getCharAtxy(x,y-1)==' ')
 {
 Sleep(200);
 emptycharacter();
 y=y-1;
 character();
 }
}

void moveplayerdown()
{
 if(getCharAtxy(x,y+50)==' ')
 {
 Sleep(200);
 emptycharacter();
 y=y+1;
 character();
 }
}

char getCharAtxy(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy={0,0};
  SMALL_RECT rect={x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci,coordBufSize,xy,&rect) ? ci.Char.AsciiChar:' ';
}


void printgoal()
{
  gotoxy(gx,gy);
  cout<<" _______________ "<<endl;
  gotoxy(gx,gy+1);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+2);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+3);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+4);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+5);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+6);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+7);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+8);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+9);
  cout<<"|***************|"<<endl; 
  gotoxy(gx,gy+10);
  cout<<"|_______________|"<<endl;
}

void emptygoal()
{
  gotoxy(gx,gy);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+1);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+2);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+3);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+4);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+5);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+6);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+7);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+8);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+9);
  cout<<"                 "<<endl; 
  gotoxy(gx,gy+10);
  cout<<"                 "<<endl;
}

void movegoalup()
{
  Sleep(200);
  emptygoal();
  gy=gy-1;
  printgoal();
}

void movegoaldown()
{
  Sleep(200);
  emptygoal();
  gy=gy+1;
  printgoal();
}



void ball()
{
  gotoxy(bx,by);
  cout<<"  .:::::.   "<<endl;
  gotoxy(bx,by+1);
  cout<<" .:::::::.  "<<endl;
  gotoxy(bx,by+2);
  cout<<" :::::::::  "<<endl;
  gotoxy(bx,by+3);
  cout<<"  :::::::   "<<endl;
  gotoxy(bx,by+4);
  cout<<"   '''''    "<<endl;
}

void emptyball()
{
  gotoxy(bx,by);
  cout<<"            "<<endl;
  gotoxy(bx,by+1);
  cout<<"            "<<endl;
  gotoxy(bx,by+2);
  cout<<"            "<<endl;
  gotoxy(bx,by+3);
  cout<<"            "<<endl;
  gotoxy(bx,by+4);
  cout<<"            "<<endl;
}


void moveballleft()
{
if(getCharAtxy(x-1,y)==' ')
{
 Sleep(100);
 emptyball();
 bx=bx-1;
 ball();
}
}

void shootball()
{
 if(GetAsyncKeyState(VK_RETURN))
 {
  moveballleft();
 }
}


void movement()
{
   
  if(GetAsyncKeyState(VK_RIGHT))
  {
   moveplayerright();
  }
  if(GetAsyncKeyState(VK_LEFT))
  {
   moveplayerleft();  
  }
  if(GetAsyncKeyState(VK_UP))
  {
   moveplayerup();
  }
  if(GetAsyncKeyState(VK_DOWN))
  {
   moveplayerdown();
  }
}


void printkeeper()
{
  gotoxy(kx,ky); 
  cout<<"      ______                                                                        "<<endl;
  gotoxy(kx,ky+1);
  cout<<"     | . .  |                                                                       "<<endl;
  gotoxy(kx,ky+2);
  cout<<"     | --   |                                                                       "<<endl;
  gotoxy(kx,ky+3);
  cout<<"     |______|                                                                       "<<endl;
  gotoxy(kx,ky+4);
  cout<<"        ||                                                                          "<<endl;
  gotoxy(kx,ky+5);
  cout<<"       /||\\                                                                        "<<endl;
  gotoxy(kx,ky+6);
  cout<<"      / || \\                                                                       "<<endl;
  gotoxy(kx,ky+7);
  cout<<"        ||                                                                          "<<endl;
  gotoxy(kx,ky+8);
  cout<<"       /  \\                                                                        "<<endl;
  gotoxy(kx,ky+9);
  cout<<"      /    \\                                                                       "<<endl;
}

void emptykeeper()
{
  gotoxy(kx,ky); 
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+1);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+2);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+3);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+4);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+5);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+6);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+7);
  cout<<"                                                                                    "<<endl;
  gotoxy(kx,ky+8);
  cout<<"                                                                                   "<<endl;
  gotoxy(kx,ky+9);
  cout<<"                                                                                   "<<endl;
}

void movekeeperupd()
{
  if(getCharAtxy(kx,ky-1)==' ')
  {
  Sleep(100);
  emptykeeper();
  ky=ky-1;
  kx=kx-1;
  printkeeper();
  }
}

void movekeeperdownd()
{
  if(getCharAtxy(kx-20,ky)==' ')
  {
  Sleep(100);
  emptykeeper();
  kx=kx+1;
  ky=ky+1;
  printkeeper();
  }
}

void cone()
{
  gotoxy(kx+4,ky);
  cout<<"   *   "<<endl;
  gotoxy(kx+4,ky+1);
  cout<<"  ***  "<<endl;
  gotoxy(kx+4,ky+2);
  cout<<"  ***  "<<endl;
  gotoxy(kx+4,ky+3);
  cout<<" ***** "<<endl;
}

void emptycone()
{
  gotoxy(kx+4,ky);
  cout<<"       "<<endl;
  gotoxy(kx+4,ky+1);
  cout<<"       "<<endl;
  gotoxy(kx+4,ky+2);
  cout<<"       "<<endl;
  gotoxy(kx+4,ky+3);
  cout<<"       "<<endl;
}

void conemove()
{
  Sleep(200);
  emptycone;
  kx=kx-1;
  cone();
}

void shootcone()
{
  if(GetAsyncKeyState(VK_SHIFT))
  {
   conemove();
  }
}

  