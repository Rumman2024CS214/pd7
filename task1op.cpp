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
    for(int i=rows;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}