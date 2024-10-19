#include<iostream>
using namespace std;
int primenum(int num);
main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int output;
    output=primenum(num);
    cout<<output;
}

int primenum(int num)
{
        int result=1,number=2;
    if(num==1)
    {
        return number;
    }
    else if(num>1 && num<=3)
    {
        num=num+1;
    }
    else
    {
        num=(num*2)+2;
    }
    while(num!=0)
    {
        int count=0;
        for(int i=1;i<=number;i++)
        {
            if(number%i==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            result=result*number;
        }
        number++;
        num--;
    }
    return result;
}