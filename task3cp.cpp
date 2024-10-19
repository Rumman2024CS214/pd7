#include<iostream>
using namespace std;
void amplify(int sequence);
main()
{
    int sequence;
    cout<<"Enter the number to Amplify: ";
    cin>>sequence;
    amplify(sequence);
}

void amplify(int sequence)
{
    int j;
    for(int i=1;i<=sequence;i++)
    {
        if(i%4==0)
        {
            j=i*10;
            cout<<j<<",";
            continue;
            
        }
        cout<<i<<",";
    }
}