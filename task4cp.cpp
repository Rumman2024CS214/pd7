#include<iostream>
using namespace std;
int calculatedots(int num);
main()
{
    int num;
    cout<<"Enter number of triangle: ";
    cin>>num;
    int output;
    output=calculatedots(num);
    cout<<"Dots in triangle: "<<output;

}

int calculatedots(int num)
{
    int dots;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dots=dots+1;
        }
    }
    return dots;
}