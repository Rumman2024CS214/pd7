#include<iostream>
#include<iomanip>
using namespace std;
void cargo(int count);
main()
{
    int count;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>count;
    cargo(count);
}

void cargo(int count)
{
    int ton;
    float bus=0,truck=0,train=0,sum=0,p1,p2,p3,avg;
    for(int i=1;i<=count;i++)
    {
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>ton;
        if(ton<=3)
        {
            bus=bus+ton;
        }
        else if(ton>3 && ton<=11)
        {
            truck=truck+ton;
        }
        else if(ton>11)
        {
            train=train+ton;
        }
        sum=sum+ton;
    }
    avg=((bus*200)+(truck*175)+(train*120))/sum;
    cout<<fixed<<setprecision(2)<<avg<<endl;
    p1=(bus/sum)*100;
    p2=(truck/sum)*100;
    p3=(train/sum)*100;
    cout<<fixed<<setprecision(2)<<p1<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<p2<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<p3<<"%"<<endl;
}