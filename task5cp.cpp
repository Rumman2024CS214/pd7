#include<iostream>
using namespace std;
bool primecheck(int num);
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    int output;
    output=primecheck(num);
    cout<<output;

}

bool primecheck(int num)
{
    int count;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }


}