#include<iostream>
using namespace std;
void printstar(int rows);
main()
{
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    printstar(rows);
}
void printstar(int rows)
{
    int star=1,space=rows-1;
    for(int i=1;i<=rows*2;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<rows)
        {
            star++;
            space--;
        }
        else
        {
            star--;
            space++;
        }
    }
    
}