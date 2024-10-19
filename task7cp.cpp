#include<iostream>
using namespace std;
void patients(int days,int patient);
main()
{
    int days,patient;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
    patients(days,patient);
}

void patients(int days,int patient)
{
    int doc=7;
    int tpatients,utpatients;
    int treatpatients=0,untreatpatients=0;
    for(int i=1;i<=days;i++)
    {
        cout<<"Numbers of patients who visited hospital on Day "<<i<<" : ";
        cin>>patient;
        if(patient>doc)
        {
            utpatients=patient-doc;
            tpatients=patient-utpatients;
            if((utpatients>tpatients) && (i+1)%3==0)
            {
                doc=doc+1;
            }
        }
        else if(patient<=doc)
        {
            tpatients=patient;
            utpatients=0;
        }
        untreatpatients+=utpatients;
        treatpatients+=tpatients;
    }
    cout<<"Treated Patients: "<<treatpatients<<endl;
    cout<<"Untreated Patients: "<<untreatpatients;  
}